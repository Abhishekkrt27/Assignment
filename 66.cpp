//66. Program to overload operators using friend function.

#include<iostream>
using namespace std;

class Student{
public:
    int marks;
    Student(int m)
    {
        marks=m;
    }
    friend Student operator+(Student a, Student b);
};
Student operator+(Student a,Student b)
{
    return Student(a.marks+b.marks);
}
int main()
{
    Student S1(95),S2(65);
    Student S3=S1 + S2;
    cout<<"Total Marks="<<S3.marks;
    return 0;
}