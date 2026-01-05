#include <iostream>
#include <string>
#include <sstream>

int main() {
    // Variables to concatenate
    std::string firstName = "Alice";
    std::string lastName = "Smith";
    int age = 25;
    double gpa = 3.85;
    
    std::cout << "=== String Concatenation Methods ===" << std::endl << std::endl;
    
    // Method 1: Using + operator
    std::cout << "Method 1: Using + operator" << std::endl;
    std::string result1 = firstName + " " + lastName + " is " + std::to_string(age) + " years old";
    std::cout << result1 << std::endl << std::endl;
    
    // Method 2: Using += operator
    std::cout << "Method 2: Using += operator" << std::endl;
    std::string result2 = "Student: ";
    result2 += firstName;
    result2 += " ";
    result2 += lastName;
    result2 += ", GPA: ";
    result2 += std::to_string(gpa);
    std::cout << result2 << std::endl << std::endl;
    
    // Method 3: Using std::stringstream (most flexible)
    std::cout << "Method 3: Using std::stringstream" << std::endl;
    std::stringstream ss;
    ss << firstName << " " << lastName << " (Age: " << age << ", GPA: " << gpa << ")";
    std::string result3 = ss.str();
    std::cout << result3 << std::endl << std::endl;
    
    // Method 4: Combining multiple types
    std::cout << "Method 4: Complex example with multiple types" << std::endl;
    bool isEnrolled = true;
    char grade = 'A';
    
    std::stringstream ss2;
    ss2 << "Name: " << firstName << " " << lastName << std::endl;
    ss2 << "Age: " << age << std::endl;
    ss2 << "GPA: " << gpa << std::endl;
    ss2 << "Grade: " << grade << std::endl;
    ss2 << "Enrolled: " << (isEnrolled ? "Yes" : "No") << std::endl;
    
    std::cout << ss2.str() << std::endl;
    
    // Method 5: Using append()
    std::cout << "Method 5: Using append() method" << std::endl;
    std::string result5;
    result5.append(firstName).append(" ").append(lastName);
    std::cout << result5 << std::endl << std::endl;
    
    return 0;
}
