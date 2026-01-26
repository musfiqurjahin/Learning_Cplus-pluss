#include <iostream>
// need to add this...
#include <vector>

// Replaced with 'using' (word  better w/ template)

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

int main()
{

    // pairlist_t pairlist;

    // std::string
    text_t FirstName = "Musfiqur";
    // std::int
    number_t age = 21;

    std::cout << "First name: " << FirstName << "\n";
    std::cout << "My age: " << age << "\n";

    return 0;
}