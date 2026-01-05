#include <iostream>
using namespace std;

int main() {

    // << = string insertion operator
    // >> = string extraction operator 
    // think of the operator in terms of dataflow
    cout<< "enter a value: ";
    double value;
    cin >> value;
    cout << value << "\n\n";

    cout << "enter values for x and y: ";

    double x;
    double y;

    cin >> x;
    cin >> y;
    cout << "x: " << x << " y: " << y << endl;

    // Farenheit to Celsius Conversion
    double farenheit_in; 
    cout << "enter temperature in farenheit: " << endl <<"\n";

    cin >> farenheit_in;
    double celsius_out = (farenheit_in-32)*(5.0/9);
    cout << "temperature in celsius: " << celsius_out;
    // IMPORTANT INTEGER DIVISION IN C++ WILL ALWAYS BE 0
    


    return 0;
}