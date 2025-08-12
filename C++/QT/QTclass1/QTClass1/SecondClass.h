#ifndef SECONDCLASS_H
#define SECONDCLASS_H
#include"FirstClass.h"
#include <QObject>

class SecondClass : public QObject
{
    Q_OBJECT
public:
    explicit SecondClass(QObject *parent = nullptr);
    ~SecondClass();

public slots:
    void onApplicationNameChanged(std::string applicationName);

private:
    FirstClass m_firstClass;
};

#endif // SECONDCLASS_H
