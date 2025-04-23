#ifndef AUDITORIUM_H
#define AUDITORIUM_H

class Auditorium
{
public:
    Auditorium(int ID);
    ~Auditorium();

    int getID();

private:
    int m_auditoriumID;
};

#endif // AUDITORIUM_H
