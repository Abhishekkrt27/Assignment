//68. Program to compare private data of two classes using friend.

#include <iostream>
using namespace std;

class Student {
private:
    int marks;
public:
    Student(int m) 
    {
        marks = m;
    }
    friend void check(Student, Student);
};

void check(Student a, Student b) 
{
    if (a.marks > b.marks)
        cout << "Student 1 higher";
    else
        cout << "Student 2 higher";
}

int main() 
{
    Student s1(75), s2(80);
    check(s1, s2);
    return 0;
}