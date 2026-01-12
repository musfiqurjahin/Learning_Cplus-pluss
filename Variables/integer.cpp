#include <iostream>

int main()
{

    // integer (whole number)
    int age = 21;
    int year = 2026;
    int days = 23;
    int day = 12;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 3.25;
    double temperature = 6.7;

    // single character:
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (true pr false)
    bool student = true;
    bool power = true;
    bool forSale = false;

    // String (objects that represents a sequence of text)
    std::string name = "Jahin";
    std::string today = "Friday";
    std::string food = "Fish";
    std::string address = "Naogaon 6500";
    std::string month = "January";

    std::cout << "Hello my name is, " << name << "!" << '\n';
    std::cout << "I'm " << age << " years old " << "by " << year << " as of " << month << " " << day << "th" << "." << '\n';
    std::cout << "My favrite dish is " << food << " curry." << '\n';
    std::cout << "My homeland is in " << address << "." << '\n';

    return 0;
}
