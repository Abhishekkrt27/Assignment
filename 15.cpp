//15. Program to demonstrate bitwise operators.

#include <iostream>
using namespace std;

int main() 
{
    
    int a = 60; 
    int b = 13; 
    int result = 0;

    cout << "Value of a (decimal): " << a << endl;
    cout << "Value of b (decimal): " << b << endl;

    // 1. Bitwise AND operator (&)
    result = a & b;
    cout << "a & b (AND) = " << result << endl;

    // 2. Bitwise OR operator (|)
    result = a | b;
    cout << "a | b (OR) = " << result << endl;

    // 3. Bitwise XOR operator (^)
    result = a ^ b;
    cout << "a ^ b (XOR) = " << result << endl;

    // 4. Bitwise NOT operator (~)
    cout << "~a (NOT) = " << (~a) << endl;

    // 5. Left shift operator (<<)
    result = a << 2;
    cout << "a << 2 (Left Shift) = " << result << endl;

    // 6. Right shift operator (>>)
    result = a >> 2;
    cout << "a >> 2 (Right Shift) = " << result << endl;

    return 0;
}