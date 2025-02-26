/*#include <iostream>
#include <unordered_set>
void print(const auto& set)
{
    for (const auto& elem : set)
        std::cout << elem << ' ';
    std::cout << '\n';
}
int main()
{
    std::unordered_set<int> mySet{2, 7, 1, 8, 2, 8}; // creates a set of ints
    print(mySet);
    mySet.insert(5); // puts an element 5 in the set
    print(mySet);
    if (auto iter = mySet.find(5); iter != mySet.end())
        mySet.erase(iter); // removes an element pointed to by iter
    print(mySet);
    mySet.erase(7); // removes an element 7
    print(mySet);
}*/

#include <iostream>
#include <unordered_set>
#include <string>

template <typename T>
class MyUnorderedSet
{
private:
    std::unordered_set<T> data;
public:
    void add(const T value)
    {
        data.insert(value);
    }

    friend std::ostream& operator<<(std::ostream& os, const MyUnorderedSet<T>& obj)
    {
        for (const auto& value : obj.data)
        {
            os << value << " ";
        }
        return os;
    }
};

int main()
{
    MyUnorderedSet<int> intSet;
    intSet.add(2);
    intSet.add(1);
    intSet.add(3);

    MyUnorderedSet<float> floatSet;
    floatSet.add(5.1f);
    floatSet.add(2.2f);
    floatSet.add(3.3f);

    MyUnorderedSet<std::string> stringSet;
    stringSet.add("hello");
    stringSet.add("world");

    std::cout << "Int Set: " << intSet << std::endl;
    std::cout << "Float Set: " << floatSet << std::endl;
    std::cout << "String Set: " << stringSet << std::endl;

    return 0;
}
