#include <iostream>

// Namespace provides a solution for preventing name conflicts
// in learge project. Each entity needs a unique name.

// A namespace allows for indentically named entities as long as the newspapaer

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{

    int x = 0;

    std::cout << first::x << '\n';

    std::cout << second::x << '\n';

    return 0;
}