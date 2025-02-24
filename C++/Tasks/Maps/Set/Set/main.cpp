/*#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <set>
#include <string_view>

template<typename T>
std::ostream& operator<<(std::ostream& out, const std::set<T>& set)
{
    if (set.empty())
        return out << "{}";
    out << "{ " << *set.begin();
    std::for_each(std::next(set.begin()), set.end(), [&out](const T& element)
                  {
                      out << ", " << element;
                  });
    return out << " }";
}

int main()
{
    std::set<int> set{1, 5, 3};
    std::cout << set << '\n';

    set.insert(2);
    std::cout << set << '\n';

    set.erase(1);
    std::cout << set << "\n\n";

    std::set<int> keys{3, 4};
    for (int key : keys)
    {
        if (set.contains(key))
            std::cout << set << " does contain " << key << '\n';
        else
            std::cout << set << " doesn't contain " << key << '\n';
    }
    std::cout << '\n';

    std::string_view word = "element";
    std::set<char> characters(word.begin(), word.end());
    std::cout << "There are " << characters.size() << " unique characters in "
              << std::quoted(word) << ":\n" << characters << '\n';
}*/


#include <iostream>
#include <set>
#include <string>

template <typename T>
class MySet
{
private:
    std::set<T> data;
public:
    void add(const T value)
    {
        data.insert(value);
    }

    friend std::ostream& operator<<(std::ostream& os, const MySet<T>& obj)
    {
        for (const auto value : obj.data)
        {
            os << value << " ";
        }
        return os;
    }
};

int main()
{
    MySet<int> intSet;
    intSet.add(3);
    intSet.add(1);
    intSet.add(2);

    MySet<float> floatSet;
    floatSet.add(5.1f);
    floatSet.add(3.2f);
    floatSet.add(2.3f);

    MySet<std::string> stringSet;
    stringSet.add("hello");
    stringSet.add("world");

    std::cout << "Int Set: " << intSet << std::endl;
    std::cout << "Float Set: " << floatSet << std::endl;
    std::cout << "String Set: " << stringSet << std::endl;

    return 0;
}


