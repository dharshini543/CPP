#ifndef SHALLOWCOPY_H
#define SHALLOWCOPY_H

class ShallowCopy
{
    int * m_data;
public:
    ShallowCopy(int val);
    ShallowCopy(const ShallowCopy &obj);
    void show();
    ~ShallowCopy();
};

#endif // SHALLOWCOPY_H
