//14. Program to demonstrate assignment operators.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << "a = " << a << '\n';
    a += 5; 
    cout << "a += 5 -> " << a << '\n';
    a -= 3; 
    cout << "a -= 3 -> " << a << '\n';
    a *= 2;
    cout << "a *= 2 -> " << a << '\n';
    a /= 4; 
    cout << "a /= 4 -> " << a << '\n';
    a %= 3; 
    cout << "a %= 3 -> " << a << '\n';
    return 0;
}