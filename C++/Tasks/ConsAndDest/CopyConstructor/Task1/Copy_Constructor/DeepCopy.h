#ifndef DEEPCOPY_H
#define DEEPCOPY_H

class DeepCopy
{
    int * data;
public:
    DeepCopy(int val);
    DeepCopy(const DeepCopy &obj);
    void show();
    ~DeepCopy();
};

#endif // DEEPCOPY_H
