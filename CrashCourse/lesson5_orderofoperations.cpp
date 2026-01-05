#include <iostream>

int main() {
    //remember to use parenthesis in order to switch around order of operations
    double b = 1 + 2 * 3;
    std::cout<<b<<std::endl<<"\n";
    
    int x = 10;
    double y = 5;
    double z = (x+10)/(3*y);
    std::cout<<"answer to z = "<<z<<std::endl<<"\n";


    return 0;

}