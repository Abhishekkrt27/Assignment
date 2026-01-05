//59. Program to initialize const data members in constructor.

#include <iostream>
using namespace std;

class Student {
    const int roll;
public:
    Student(int r) : roll(r) {
        cout << "Roll = " << roll;
    }
};

int main() 
{
    Student s(03);
    return 0;
}