#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num_binary = 0b11111111; //this is 255 in binary
    cout << num_binary << endl << "\n\n";

    int num_hexadecimal = 0xff; //this is 255 in binary
    cout << num_hexadecimal;
    // ========================================
    // SIGNED vs UNSIGNED DATA TYPES
    // ========================================
    
    // SIGNED TYPES (default for int, short, long, etc.)
    // - Can store both POSITIVE and NEGATIVE numbers
    // - Uses one bit for the sign (+ or -)
    // - Range is split between negative and positive
    // Example: signed char ranges from -128 to +127
    
    // UNSIGNED TYPES (prefix with 'unsigned')
    // - Can ONLY store POSITIVE numbers (0 and above)
    // - No bit wasted on sign, so positive range DOUBLES
    // - Range starts at 0 and goes to a higher positive number
    // Example: unsigned char ranges from 0 to 255
    
    // WHEN TO USE SIGNED (default):
    // - When you need negative numbers (temperatures, coordinates, differences)
    // - When doing math that might result in negative values
    // - Most general-purpose calculations
    // Examples: bank balance changes, elevation, velocity
    
    // WHEN TO USE UNSIGNED:
    // - When values can NEVER be negative (counts, sizes, ages, indices)
    // - When you need the extra positive range
    // - For bit manipulation and low-level operations
    // - For memory addresses and array sizes
    // Examples: array size, number of students, pixel colors (0-255)
    
    // COMPARISON EXAMPLE:
    signed char signedChar = -50;      // Can be negative: -128 to 127
    unsigned char unsignedChar = 200;  // Only positive: 0 to 255
    
    cout << "\n\nSigned char: " << (int)signedChar << " (can be negative)" << endl;
    cout << "Unsigned char: " << (int)unsignedChar << " (only positive, higher max)" << endl;
    
    // DANGER: Unsigned underflow wraps around!
    unsigned int count = 0;
    count = count - 1;  // Wraps to 4,294,967,295 instead of -1!
    cout << "\nUnsigned underflow: 0 - 1 = " << count << " (wraps around!)" << endl;
    
    return 0;
}