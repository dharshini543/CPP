#ifndef CALCULATOR_H
#define CALCULATOR_H

/*struct name
{
    int a = 10;
    int b = 20;
};*/

class Calculator
{
public:
    int m_num1;
    int m_num2;
    int num3;

    Calculator();
    ~Calculator();

    void add(int a);
    //float add(int a,int b);
    void add(int a,int b);
    void add(int a,int b,int c);

    void sub(int a);
    void sub(int a,int b);
    void sub(int a,int b,int c);

};

#endif // CALCULATOR_H
