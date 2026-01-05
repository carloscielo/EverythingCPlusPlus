#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

int main() {
    cout << "=== C++ Calculation Gotchas ===" << endl << endl;
    
    // 1. Integer Division
    cout << "1. INTEGER DIVISION" << endl;
    cout << "5 / 9 = " << 5 / 9 << " (integer division)" << endl;
    cout << "5.0 / 9.0 = " << 5.0 / 9.0 << " (floating-point division)" << endl << endl;
    
    // 2. Integer Overflow
    cout << "2. INTEGER OVERFLOW" << endl;
    int maxInt = 2147483647;
    cout << "Max int: " << maxInt << endl;
    cout << "Max int + 1: " << maxInt + 1 << " (overflow!)" << endl << endl;
    
    // 3. Modulo with Negatives
    cout << "3. MODULO WITH NEGATIVE NUMBERS" << endl;
    cout << "-5 % 3 = " << -5 % 3 << " (not 1!)" << endl;
    cout << "5 % -3 = " << 5 % -3 << " (not -1!)" << endl << endl;
    
    // 4. Floating-Point Precision
    cout << "4. FLOATING-POINT PRECISION" << endl;
    double sum = 0.1 + 0.2;
    cout << "0.1 + 0.2 = " << sum << " (not exactly 0.3!)" << endl;
    cout << "0.1 + 0.2 == 0.3? " << (sum == 0.3 ? "true" : "false") << endl;
    cout << "Use epsilon for comparison: " << (abs(sum - 0.3) < 0.00001 ? "true" : "false") << endl << endl;
    
    // 5. Mixed Integer/Float Division
    cout << "5. MIXED INTEGER/FLOAT DIVISION" << endl;
    int a = 5, b = 2;
    double wrong = a / b;           // Division happens as int first!
    double right = (double)a / b;   // Cast to double first
    cout << "int a=5, b=2;" << endl;
    cout << "double wrong = a / b: " << wrong << endl;
    cout << "double right = (double)a / b: " << right << endl << endl;
    
    // 6. Order of Operations
    cout << "6. ORDER OF OPERATIONS" << endl;
    cout << "5 + 3 * 2 = " << 5 + 3 * 2 << " (not 16!)" << endl;
    cout << "(5 + 3) * 2 = " << (5 + 3) * 2 << endl;
    cout << "10 / 2 * 3 = " << 10 / 2 * 3 << " (left-to-right)" << endl;
    cout << "10 / (2 * 3) = " << 10 / (2 * 3) << endl << endl;
    
    // 7. Pre vs Post Increment
    cout << "7. PRE vs POST INCREMENT" << endl;
    int x = 5;
    int y = x++;  // Post-increment: use then increment
    cout << "x=5; y=x++; -> x=" << x << ", y=" << y << endl;
    x = 5;
    int z = ++x;  // Pre-increment: increment then use
    cout << "x=5; z=++x; -> x=" << x << ", z=" << z << endl << endl;
    
    // 8. Division by Zero
    cout << "8. DIVISION BY ZERO" << endl;
    cout << "5.0 / 0.0 = " << 5.0 / 0.0 << " (infinity)" << endl;
    cout << "0.0 / 0.0 = " << 0.0 / 0.0 << " (NaN - Not a Number)" << endl;
    // int divByZero = 5 / 0;  // Undefined behavior - would crash!
    cout << endl;
    
    // 9. Narrowing Conversions
    cout << "9. NARROWING CONVERSIONS" << endl;
    double pi = 3.14159;
    int piInt = pi;  // Decimal part lost!
    cout << "double pi = 3.14159;" << endl;
    cout << "int piInt = pi; -> " << piInt << " (decimal lost!)" << endl << endl;
    
    // 10. Unsigned Underflow
    cout << "10. UNSIGNED INTEGER UNDERFLOW" << endl;
    unsigned int u = 0;
    cout << "unsigned int u = 0;" << endl;
    cout << "u - 1 = " << u - 1 << " (wraps around!)" << endl << endl;
    
    // 11. Comparing Floats
    cout << "11. COMPARING FLOATS (BEST PRACTICE)" << endl;
    double val1 = 0.1 + 0.2;
    double val2 = 0.3;
    const double EPSILON = 0.00001;
    cout << "Wrong: val1 == val2 -> " << (val1 == val2) << endl;
    cout << "Right: abs(val1 - val2) < EPSILON -> " << (abs(val1 - val2) < EPSILON) << endl << endl;
    
    return 0;
}
