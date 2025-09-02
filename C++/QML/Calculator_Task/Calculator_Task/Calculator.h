#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <qobject.h>

class Calculator:public QObject
{
    Q_OBJECT
public:
    Calculator();
    ~Calculator();
    Q_INVOKABLE double add(double num1,double num2);
    Q_INVOKABLE double subtract(double num1,double num2);
    Q_INVOKABLE double multiply(double num1,double num2);
    Q_INVOKABLE double divide(double num1,double num2);

private:
    QStringList m_buttons;

};

#endif // CALCULATOR_H
