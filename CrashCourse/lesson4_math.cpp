# include <iostream>

int main () {

    int x = 10;
    int y = 3;
    int z = 0;
// General Operations
    //z = x+y;
    //z = x-y;
    //z = x*y;
    //z = x/y;
    //std::cout << z;

// Division, with floating point calc:
    ////below is demonstrated that to divide at least one number divided must be a double
    ////to use the modulus for the remainder all numbers must be ints.
    ////IMPORTANT INTEGER DIVISION in C++ IS ALWAYS 0
    //double g = y;
    //double p = x/g;   
    //std::cout << "the quotient is p = " << p << std::endl;
    //int i = x % y;
    //std::cout << "the remainder is i = " << i << std::endl;

// Variable Mod Operations
    ////suppose you want to increment x

    //// x = x + 1; = x++; THIS IS THE INCREMENT OPERATOR
    //// WHEN INCREMENTER (++) is suffix:
    //int b = x++;
    //std::cout << "the original value (x) is incrimented:" << x << std::endl;
    //std::cout << "the original value (x) is assigned to (b):" << b << std::endl;

    //// WHEN INCREMENTER (++) is preffix:
    int b = ++x;
    std::cout << "the original value (x) is incrimented:" << x << std::endl;
    std::cout << "the incremented value (x) is assigned to (b):" << b << std::endl;

}