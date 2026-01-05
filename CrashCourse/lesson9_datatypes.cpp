#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // ========================================
    // FUNDAMENTAL DATA TYPES IN C++
    // ========================================
    
    // INTEGER TYPES
    // -------------
    // char                 - 1 byte  - Range: -128 to 127 (or 0 to 255 if unsigned)
    // short                - 2 bytes - Range: -32,768 to 32,767
    // int                  - 4 bytes - Range: -2,147,483,648 to 2,147,483,647
    // long                 - 4 bytes - Range: -2,147,483,648 to 2,147,483,647 (same as int on most systems)
    // long long            - 8 bytes - Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    
    // UNSIGNED INTEGER TYPES (only positive numbers, doubles the positive range)
    // -------------
    // unsigned char        - 1 byte  - Range: 0 to 255
    // unsigned short       - 2 bytes - Range: 0 to 65,535
    // unsigned int         - 4 bytes - Range: 0 to 4,294,967,295
    // unsigned long        - 4 bytes - Range: 0 to 4,294,967,295
    // unsigned long long   - 8 bytes - Range: 0 to 18,446,744,073,709,551,615
    
    // FLOATING-POINT TYPES (decimal numbers)
    // -------------
    // float                - 4 bytes - Range: ±3.4e±38 (~7 decimal digits precision)
    // double               - 8 bytes - Range: ±1.7e±308 (~15 decimal digits precision)
    // long double          - 8-16 bytes - Range: ±1.7e±308 or more (system dependent, ~15-19 digits precision)
    
    // BOOLEAN TYPE
    // -------------
    // bool                 - 1 byte  - Values: true (1) or false (0)
    
    // CHARACTER TYPE
    // -------------
    // char                 - 1 byte  - Stores single ASCII character (e.g., 'A', 'z', '5', '@')
    // wchar_t              - 2-4 bytes - Wide character (for Unicode)
    // char16_t             - 2 bytes - UTF-16 character
    // char32_t             - 4 bytes - UTF-32 character
    
    // VOID TYPE
    // -------------
    // void                 - No size - Represents absence of type (used for functions that return nothing)
    
    // SIZE_T TYPE (special unsigned integer type)
    // -------------
    // size_t               - 4 or 8 bytes - Used for sizes and counts (matches pointer size on system)
    
    // ========================================
    // EXAMPLES
    // ========================================
    
    char myChar = 'A';                    // Single character
    short myShort = 32000;                // Small integer
    int myInt = 2147483647;               // Standard integer
    long myLong = 2147483647L;            // Long integer (L suffix)
    long long myLongLong = 9223372036854775807LL;  // Very large integer (LL suffix)
    
    unsigned int myUnsignedInt = 4294967295U;  // Only positive (U suffix)
    
    float myFloat = 3.14159f;             // Single precision (f suffix)
    double myDouble = 3.14159265358979;   // Double precision
    long double myLongDouble = 3.14159265358979323846L;  // Extended precision
    
    bool myBool = true;                   // Boolean value
    
    // Print examples
    cout << "char: " << myChar << endl;
    cout << "int: " << myInt << endl;
    cout << "float: " << myFloat << endl;
    cout << "double: " << myDouble << endl;
    cout << "bool: " << myBool << endl;
    
    return 0;
}

