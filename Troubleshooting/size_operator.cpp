#include <iostream>
#include <cmath>
using namespace std;

struct MyStruct {
    int x;
    double y;
    char z;
};

int main() {

    /* sizeof() = operator determines the size in bytes of a:
                    variable, data, type, class, object
    */

    
    double gpa = 2.5;
    string name = "bro code";
    char grade = 'B';
    bool student = true;
    char grades[] = {'A','B','C','D','F'};
    MyStruct structVar;

    cout << "double bytes: " <<sizeof(gpa) << endl;
    cout << "string bytes: " <<sizeof(name) << endl;
    cout << "char bytes: " <<sizeof(grade) << endl;
    cout << "bool bytes: " <<sizeof(student) << endl;
    cout << "char array bytes: " <<sizeof(grades) << endl;
    cout << "struct bytes: " <<sizeof(structVar) << endl;

    //sizeof operator can be used to calcluate how many elements are in an array
    // #ofElems = sizeof(array)/sizeof(datatype/elem)

    cout << "num of elements: " << sizeof(grades)/sizeof(grades[0]) << endl;




    return 0;
}