#include "EventLogger.h"
#include <QDebug>

EventLogger::EventLogger(QObject *parent)
    : QObject(parent)
{
}

void EventLogger::logHover()
{
    qDebug() << "HOVER ENTERED";
}

void EventLogger::logClick()
{
    qDebug() << "CLICKED";
}

void EventLogger::logKey()
{
    qDebug() << "KEY PRESSED";
}
