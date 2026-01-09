#include <iostream>
#include <cmath>
using namespace std;

int main() {

    string cars[] = {"honda", "ford", "chevy"};
    //in C++ use single quotes for chars, and double quotes for strings
    //Note that you cannot print all array contents, the options are to Loops through, print individually, use a range based loop
    //Note that Arrays can only contain a single datatype

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;

    //Empty arrays can be created and filled in

    string pizza[4];
    pizza[0] = "pepperoni";
    pizza[1] = "ham";
    pizza[2] = "hawaiian";
    pizza[3] = "bbq";
  

    cout << pizza[2] << endl;

    double prices[] = {10.00, 3.00, 4.00, 12.94};

    cout << prices[0] << '\n';
    cout << prices[1] << '\n';
    cout << prices[2] << '\n';
    cout << prices[3] << '\n';
  
  
    return 0;




}