#ifndef EVENTLOGGER_H
#define EVENTLOGGER_H

#include <QObject>

class EventLogger : public QObject
{
    Q_OBJECT
public:
    explicit EventLogger(QObject *parent = nullptr);

    Q_INVOKABLE void logHover();
    Q_INVOKABLE void logClick();
    Q_INVOKABLE void logKey();
};

#endif // EVENTLOGGER_H
