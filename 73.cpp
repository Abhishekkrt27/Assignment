//73. Program with constant object.

#include <iostream>
using namespace std;

class Student 
{
public:
    int roll;
    Student(int r) {
        roll = r;
    }
    void show() const {
        cout << "Roll = " << roll;
    }
};

int main() 
{
    const Student s(101);
    s.show();
    return 0;
}