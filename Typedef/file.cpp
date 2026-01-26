#include <iostream>
// need to add this...
#include <vector>

/*Typedef ->> reverved keyword used to create an additional name (alias) for
another data type.
-New identifier for an existing type.
-Helpsnwith readablity and reduces typos. */
// use it when there is a clear benefit
// Replaced with 'using' (word  better w/ template)

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;
typedef int number_t;

int main()
{

    // pairlist_t pairlist;

    // std::string
    text_t FirstName = "Musfiqur";
    // std::int
    number_t age = 21;

    std::cout << FirstName << "\n";
    std::cout << "My age " << age << "\n";

    return 0;
}