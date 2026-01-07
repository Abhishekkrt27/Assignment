//84. Program for hierarchical inheritance.

#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    int marks;
};

class Result : public Student {
public:
    void show()
    {
        roll = 03;
        cout << "Roll No = " << roll << endl;
    }
};

class Attendance : public Student {
public:
    void show() 
    {
        marks = 99;
        cout << "Marks= " << marks;
    }
};

int main() 
{
    Result R;
    Attendance A;
    R.show();
    A.show();
    return 0;
}