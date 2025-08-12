// #include <QTextStream>
// #include <QByteArrayView>
// #include <QBuffer>
// #include <QByteArray>

// int main()
// {
//     QByteArray data;
//     QBuffer buffer(&data);
//     buffer.open(QIODevice::WriteOnly);

//     QTextStream stream(&buffer);

//     QByteArrayView view("hello");  // or: QByteArrayView view = QByteArray("hello");

//     stream << view;  // ❌ This line will cause a compile error in Qt 6.7.2
//     // // stream << QByteArray(view);  // ✅ compiles, but less efficient
//     // QTextStream stream;
//     // QByteArrayView byteArrayView = getToken();
//     // stream << byteArrayView;


//     return 0;
// }

#include <QTemporaryFile>
#include <QDebug>

int main()
{
    // Template with multiple XXXXXX occurrences
    QString templateName = "temp_prefix_XXXXXX_suffix_XXXXXX";

    QTemporaryFile tempFile(templateName);

    if (!tempFile.open()) {
        qWarning() << "Failed to open temp file";
        return 1;
    }

    qDebug() << "Template name:    " << templateName;
    qDebug() << "Final file name:  " << tempFile.fileName();
    tempFile.remove();

    return 0;
}
