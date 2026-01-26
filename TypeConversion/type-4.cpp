#include <iostream>

/*Type conversion = conversion a value of one data type to another*/
// implicit = automatic
// Explicit = Precede value with new data type (int)

int main()
{

    // conv using ascii table

    int correct = 8;
    int question = 10;
    double score = correct / (double)question * 100;

    std::cout << score << "%";

    return 0;
}