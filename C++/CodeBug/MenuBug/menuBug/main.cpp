#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDebug>
#include <QDate>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    // Problem scenario: QDate sent to QML and back
    QDate date = QDate::currentDate();

    // ❌ Simulating current QQuickMonthGrid behavior
    QVariant variantDate = QVariant::fromValue(date);

    // ✅ Workaround: Create QDateTime instead to avoid UTC shift bugs
    QDateTime dateTimeSafe(date, QTime(12, 0), Qt::LocalTime);  // This is safer
    QVariant variantDateTime = QVariant::fromValue(dateTimeSafe);

    qDebug() << "Original QDate:" << date;
    qDebug() << "Unsafe QDate -> QVariant -> QDateTime:" << variantDate.toDateTime(); // UTC start-of-day
    qDebug() << "Safe QDateTime -> QVariant -> QDateTime:" << variantDateTime.toDateTime();

    return 0;
}
