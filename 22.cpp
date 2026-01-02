//22. Program using if-else.

#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout <<num << " Even number";
    else
        cout <<num<< " Odd number";

    return 0;
}