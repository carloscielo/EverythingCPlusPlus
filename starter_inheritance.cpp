#include <iostream>
#include <cmath>
using namespace std;

// here is a simple example of a class with inheritance

class Person{
    public:
    string first;
    string last;
    void printFulName() {cout << first << " " << last << endl;}
};

class Employee : public Person{
    public:
    string rank;

    void DispRank() {cout << last << " Rank: " << rank << endl;}

};


int main() {
    Person p;

    p.first = "Carlos";
    p.last = "Cielo";

    p.printFulName();


    Employee e;
    e.first = "Jason";
    e.last = "Rodriguez";
    e.rank = "luitenent";
    e.DispRank();

    return 0;
}

/*Quick Vocab:

class - data structure
object - a very specific example from the structure (instance)
instance - another name for an object as above
instantiating
data memebers - variables that are defined inside of the class
methods - functions inside of the class
*/

// Inheritance -- create derived classes that inherit properties from their arent classes
// Abstraction -- hiding away multiple complex items making the interface simple
// Polymorphism -- treat multiple objects as their base object type
// Encapsulation -- granting access to private data only through controlled public interfaces


//I APE
// I APE
// Inheritance. Abstraction, Polymorphism, Encapsulation

//Parent Class ()base class - inherited from
// CHiled class derived class - inherited class


