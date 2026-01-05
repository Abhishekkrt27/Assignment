//64. Program with two classes and a common friend function.

#include<iostream>
using namespace std;

class Student{
public:
    int marks;
    Student(int m){
        marks=m;
    }
    friend void compare(Student,Student);
};
void compare(Student a,Student b)
{
    if(a.marks>b.marks)
        cout<<"Student A has higher marks.";
    else
        cout<<"Student B has higher marks.";
}
int main()
{
    Student S1(96),S2(86);
    compare(S1,S2);
    return 0;
}