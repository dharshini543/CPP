#ifndef SINGLETON_H
#define SINGLETON_H

class SingleTon
{
public:
    SingleTon();
    static SingleTon& get();
    void hello();
private:
  //  static SingleTon* m_instance;
};

#endif // SINGLETON_H
