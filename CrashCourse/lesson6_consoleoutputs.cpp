#include <iostream>
using namespace std;

int main() {

    double sales = 9000;
    cout << "sales: $" << sales << endl;

    const double countyTaxRate = 0.04;
    double countyTax = sales * countyTaxRate;
    cout <<"county Tax: $" << countyTax << endl;

    return 0;


}