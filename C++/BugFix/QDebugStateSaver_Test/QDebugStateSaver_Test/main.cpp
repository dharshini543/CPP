#include <QCoreApplication>
#include <QDebug>
#include <QDebugStateSaver>

class MyType {
public:
    QString text;
};

QDebug operator<<(QDebug dbg, const MyType &obj)
{
    //QDebugStateSaver saver(dbg);
    dbg.nospace();  // Modifies spacing

    dbg << "MyType(" << obj.text << ")";
    return dbg;
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    MyType value;
    value.text = "Test";

    QDebug d = qDebug();  // Reuse the same QDebug object
    d << "Logging:" << value;
    d << 123 << "ABC";  // This line is affected by previous .nospace()

    return 0;
}
