#include <iostream>
#include <cmath>
using namespace std;

//THE FOLLOWING IS A EXAMPLE OF A CONSTRUCTOR
class Person_constructor{\
    private:
    string first;
    string last;
    public:
    Person_constructor(string first, string last) : first(first), last(last) {}
    void printFulName() {cout << first << " " << last << endl;}
};

//THE FOLLOWING IS A EXAMPLE OF A SETTER
class Person{\ 
    //setting a private portion of the objects is a direct example of encapsulation
    private:
    string first;
    string last;
    public:
    //The following 2 methods are setters that assign input string to the object
    void setFirstName(string firstName) {first=firstName;}
    void setLastName(string lastName) {last=lastName;}
    void printFulName() {cout << first << " " << last << endl;}
};

int main() {
    Person p;

    p.setFirstName("Carlos");
    p.setLastName("Cielo");

    p.printFulName();

    Person d;

    d.setFirstName("Alejandro");
    d.setLastName("Villanueva");

    d.printFulName();

    Person_constructor c("Monica","Perez");
    c.printFulName();

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