//12. Program to demonstrate relational operators.

#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout<<"Enter 1st number:";
    cin>>x;
    cout<<"Enter 2nd number:";
    cin>>y;
    cout << boolalpha;
    cout << "x == y: " << (x == y) << '\n';
    cout << "x != y: " << (x != y) << '\n';
    cout << "x < y: " << (x < y) << '\n';
    cout << "x > y: " << (x > y) << '\n';
    cout << "x <= y: " << (x <= y) << '\n';
    cout << "x >= y: " << (x >= y) << '\n';
    return 0;
}