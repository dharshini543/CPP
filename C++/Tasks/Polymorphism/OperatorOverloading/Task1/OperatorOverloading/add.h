#ifndef ADD_H
#define ADD_H

class add
{
private:
    int m_num;
public:
    add();
    ~add();
    add(int num);
    add func(const add &obj);

    add operator +(const add &obj);
    void printadd();

    add operator -(const add &obj);
    void printsub();

    add operator *(const add &obj);
    void printmul();

    add operator /(const add &obj);
    void printdiv();

    bool operator >=(const add &obj);

    bool operator <=(const add &obj);

    bool operator ==(const add &obj);


};

#endif
