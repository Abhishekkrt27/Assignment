//60. Program to initialize static data members.

#include <iostream>
using namespace std;

class Student {
public:
    static int count;
};

int Student::count = 5;

int main() 
{
    cout << "Student count = " << Student::count;
    return 0;
}
