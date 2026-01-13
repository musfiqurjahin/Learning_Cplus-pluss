#include <iostream>


//the const keyword specifies that a variable's value is constant
//tells the compiler to prevent anything from modifying it 
//read only

int main() {
    //const
    const double PI = 3.1416;
    // PI = 420.50;

    const int LIGHT_SPEED =  299792458;
    const int WIDTH =1920;
    const int HEIGHT =1080;

     double radious = 10;
     double circuments = 2 * PI *radious;
 
     std::cout <<circuments << " cm" << '\n';
    



    return 0;
}