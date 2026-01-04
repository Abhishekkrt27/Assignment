//52. Program with parameterized constructor.

#include<iostream>
using namespace std;

class Student{
public:
    Student(int roll)
    {
        cout<<"Enter Student Roll No:"<<roll;
    }
};

int main()
{
    Student S(3);
    return 0;
}