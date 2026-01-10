#include <iostream>
#include <cmath>
using namespace std;

int main() {

    //pay attention to the structure of the for loop:
    /*
    for(<Datatype>INITIAL COND,STOPPING COND,INCREMENT COUNTER)
    */

    for(int x=0;x<4;x++){

        cout<<x<<'\n'<<endl;

    }
    /*
    x++ vs ++x DOES NOT MATTER IN LOOP
    
    IT ONLY MATTERS:
    int x = 0;
    cout << x++ << endl;  
    // Prints 0, then x becomes 1

    int x = 0;
    cout << ++x << endl;  
    // x becomes 1, then prints 1

    */

    return 0;
}