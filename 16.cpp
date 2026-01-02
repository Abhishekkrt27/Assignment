//16. Program demonstrating increment/decrement.

// prog16.cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << "a = " << a << '\n';
    cout << "++a = " << ++a << '\n'; 
    cout << "a++ = " << a++ << '\n'; 
    cout << "now a = " << a << '\n';
    cout << "--a = " << --a << '\n';
    cout << "a-- " << a-- << '\n';
    cout << "now a = " << a << '\n';
    return 0;
}
