#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double result_floor = floor(1.2);
    cout<<result_floor<<endl << "\n\n";

    double result_pow = pow(2,4);
    cout<<result_pow <<endl << "\n\n" ;

    //area of a circle

    double radius_in;
    const double pi = 3.141;
    cout << "input radius of circle:" << endl << "\n";
    cin >> radius_in;

    double a_circle_out = pi*pow(radius_in,2);
    cout << "area of circle:" << a_circle_out << " units squared";
    // COMMENTS DO NOT GET COMPILED IN C++
    /*
    hello this is a multiline comment block
    use them to explain WHY and HOW 
    
    */

    return 0;

}