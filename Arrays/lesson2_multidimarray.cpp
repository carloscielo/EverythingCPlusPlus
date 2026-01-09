#include <iostream>
#include <cmath>

using namespace std;

int main() {

    string cars[][3] = {{"mustang", "escape", "maverick"},
                       {"corvette","equinox","traverse"},
                       {"challenger","durango","avenger"}};

    
    /*
    cout << cars[0][0] <<" ";
    cout << cars[0][1] <<" ";
    cout << cars[0][2] <<" \n";
    cout << cars[1][0] <<" ";
    cout << cars[1][1] <<" ";
    cout << cars[1][2] <<"\n";
    cout << cars[2][0] <<" ";
    cout << cars[2][1] <<" ";
    cout << cars[2][2] <<"\n";
    */                

    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);

    ////the following loop will give 3 memory addresses for 3 rows
    //for(int i = 0; i<rows; i++){
    //cout << cars[i] << '\n';
    //};

    for(int i = 0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << cars[i][j] << " " << endl;
        };
        cout << '\n';
    };
    
    return 0;


}