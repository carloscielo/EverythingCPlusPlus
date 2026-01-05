#include <iostream>
#include <cmath>

using namespace std;

// Narrowing is when a var larger type

int main() {

    ////the following commands will be errors, this will narrow the number you have
    //int 1'000'000;
    //short another = number;
    //cout << another;

    ////if you use a brace initializer, that should not even compile
    //short another{number};

    ////now what if we do the opposite?
    //short number = 1'000'000; this is too big
    short number = 100;
    int another = {number};
    cout << another;

    return 0;

}