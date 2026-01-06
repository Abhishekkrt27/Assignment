//67. Program to add two complex numbers using friend.

#include<iostream>
using namespace std;

class Student{
public:
    int marks;
    Student(int m)
    {
        marks=m;
    }
    friend void add(Student,Student);
};
void add(Student a,Student b)
{
    cout<<"Sum= "<<a.marks+b.marks;
}
int main()
{
    Student S1(68),S2(85);
    add(S1,S2);
    return 0;
}