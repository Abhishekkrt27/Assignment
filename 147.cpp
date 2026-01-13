//147. Program throwing an integer exception.

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try 
    {
        if (age < 18) 
        {
            throw age;   
        }
        cout << "You are eligible to vote";
    }
    catch (int x) 
    {
        cout << "Age is less than 18: " << x;
    }

    return 0;
}
