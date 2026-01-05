#include <iostream>

int main() {

    int file_size = 100;
    //Lesson: always initialize variables because then you will cause garbage in memory

    double sales = 9.998;
    std::cout << file_size << std::endl << "\n";

// Test: now lets try swapping 2 variables:
    int a = 1;
    int b = 2;
    int c = a;

    a = b;
    b = c;

    std::cout << a;

    return 0;
}