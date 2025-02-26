/*#include <iostream>
#include <string>
#include <unordered_map>
int main()
{
    // Create an unordered_map of three strings (that map to strings)
    std::unordered_map<std::string, std::string> u =
        {
            {"RED", "#FF0000"},
            {"GREEN", "#00FF00"},
            {"BLUE", "#0000FF"}
        };
    // Helper lambda function to print key-value pairs
    auto print_key_value = [](const auto& key, const auto& value)
    {
        std::cout << "Key:[" << key << "] Value:[" << value << "]\n";
    };
    std::cout << "Iterate and print key-value pairs of unordered_map, being\n"
                 "explicit with their types:\n";
    for (const std::pair<const std::string, std::string>& n : u)
        print_key_value(n.first, n.second);
    std::cout << "\nIterate and print key-value pairs using C++17 structured binding:\n";
    for (const auto& [key, value] : u)
        print_key_value(key, value);
    // Add two new entries to the unordered_map
    u["BLACK"] = "#000000";
    u["WHITE"] = "#FFFFFF";
    std::cout << "\nOutput values by key:\n"
                 "The HEX of color RED is:[" << u["RED"] << "]\n"
                             "The HEX of color BLACK is:[" << u["BLACK"] << "]\n\n";
    std::cout << "Use operator[] with non-existent key to insert a new key-value pair:\n";
    print_key_value("new_key", u["new_key"]);
    std::cout << "\nIterate and print key-value pairs, using `auto`;\n"
                 "new_key is now one of the keys in the map:\n";
    for (const auto& n : u)
        print_key_value(n.first, n.second);
}*/

#include <iostream>
#include <unordered_map>
#include <string>

template <typename K, typename V>
class MyUnorderedMap
{
private:
    std::unordered_map<K, V> data;
public:
    void add(const K& key, const V& value)
    {
        data[key] = value;
    }

    friend std::ostream& operator<<(std::ostream& os, const MyUnorderedMap<K, V>& obj)
    {
        for (const auto& pair : obj.data)
        {
            os << "{" << pair.first << ": " << pair.second << "} ";
        }
        return os;
    }
};

int main()
{
    MyUnorderedMap<int, std::string> intStringMap;
    intStringMap.add(1, "one");
    intStringMap.add(2, "two");
    intStringMap.add(3, "three");

    MyUnorderedMap<float, std::string> floatStringMap;
    floatStringMap.add(1.1f, "one point one");
    floatStringMap.add(2.2f, "two point two");
    floatStringMap.add(3.3f, "three point three");

    MyUnorderedMap<std::string, int> stringIntMap;
    stringIntMap.add("hello", 1);
    stringIntMap.add("world", 2);

    std::cout << "Int-String Map: " << intStringMap << std::endl;
    std::cout << "Float-String Map: " << floatStringMap << std::endl;
    std::cout << "String-Int Map: " << stringIntMap << std::endl;

    return 0;
}

