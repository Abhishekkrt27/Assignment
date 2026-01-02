//19. Program to check leap year.

#include <iostream>
using namespace std;

int main() 
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        cout << year << " Leap Year.";
    } 
    else 
    {
        cout << year << " NOT a Leap Year.";
    }

    return 0;
}