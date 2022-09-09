#include <iostream>
#include <array>
#include <vector>
#include <map>

int main () {
    std::array<std::string, 2> adjs = {"", ""};
    std::map<std::string, std::string> nouns{
        {"spring", "STL guru"},
        {"summer", "C++ expert"},
        {"autumn", "coding beast"},
        {"winter", "software design hero"}
        };
    std::array<std::string, 3> ends = {
        "eats UB for breakfast",
        "finds errors quicker than the compiler",
        "is not afraid of C++ error messages"
    };
    std::cout << "Welcome to the fortune teller program!\n";
    std::string name, noun, adj;
    std::cout << "Please enter your name:\n";
    std::cin >> name;
    std::cout << "Please enter the time of year when you were born:\n"
                 "(pick from 'spring', 'summer', 'autumn', 'winter')\n";
    std::cin >> noun;
    std::cout << "Please enter adjective:\n";
    std::cin >> adj;
    adjs[0] = adj;
    std::cout << "Please enter another adjective:\n";
    std::cin >> adj;
    adjs[1] = adj;
    int adj_idx = name.size() % adjs.size();
    int end_idx = name.size() % ends.size();
    std::cout << "\nHere is your description:\n"
              << name << ", the " << adjs[adj_idx] << " " << nouns.at(noun)
              << " that " << ends[end_idx] << std::endl;

    return 0;
}