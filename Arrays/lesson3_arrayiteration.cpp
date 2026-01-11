#include <iostream>
#include <cmath>
#include<array>
using namespace std;



int main() {

    string students[] = {"loa","barbie","yayson","carlos"};

    //normally you would need to access each element
    //for loop using SIZE
    int num_students = size(students);
    cout << "number of students from size: " << num_students << endl;

    for(int i=0;i<num_students;i++){
        cout << students[i] << endl;
    };

    //for loop using SIZEOF
    int length_students = sizeof(students)/sizeof(students[0]);
    cout << "number of students from sizeof: " << length_students << endl;
    //for(int i=0;i<lenth_students;i++){
    //    cout << students[i] << endl;
    //};

    //for loop using array library 
    array<string,4> mystudentarray = {"loa","barbie","yayson","carlos"};
    size_t liblength_students = mystudentarray.size();
        cout << "number of students from sizeof: " << length_students << endl;

    //for(int i=0;i<liblength_students;i++){
    //    cout << mystudentarray[i] << endl;
    //};

    //Quick note size_t: an unsigned integer made for holding posetive values 




    return 0;
}