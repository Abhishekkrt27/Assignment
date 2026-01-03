//39. Program demonstrating pointers basic operations.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p stores: " << p << endl;
    cout << "Value at pointer p: " << *p << endl;

    return 0;
}
