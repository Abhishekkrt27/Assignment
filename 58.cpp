//58. Program to dynamically allocate memory in constructor.

#include <iostream>
using namespace std;

class Student {
    int *roll;
public:
    Student() {
        roll =new int(101);
        cout << "Roll = " << *roll;
    }

    ~Student() {
        delete roll;
    }
};

int main() 
{
    Student s;
    return 0;
}