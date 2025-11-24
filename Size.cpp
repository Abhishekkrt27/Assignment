//2. Program to demonstrate data types and sizes.

#include <iostream>
using namespace std;
int main() {
    cout << "Data Type Sizes in C++ (in bytes):" << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;
    cout << "bool: " << sizeof(bool) << endl;

    return 0;
}