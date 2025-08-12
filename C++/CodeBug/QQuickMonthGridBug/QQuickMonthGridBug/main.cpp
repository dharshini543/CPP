#include <QGuiApplication>
#include <QDate>
#include <QDebug>
#include <private/qquickmonthgrid_p.h> // Private header
#include <QPointF>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQuickMonthGrid grid;
    grid.setMonth(QDate(2025, 8, 1));

    QPointF testPos(50, 50); // Simulate click at (50,50)

    // NOTE: You may need to call polish/updatePolish() before layout works properly.
    grid.polish();

    // This triggers internal layouting. Not required but sometimes helps.
    grid.forceActiveFocus();

    // Try accessing internal logic
    auto cellDate = grid.dateAt(testPos);  // <- will only work if your patch exposes it or if dateOf() is public
    qDebug() << "Date at" << testPos << "is" << cellDate;

    return 0;
}
