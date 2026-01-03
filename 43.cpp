//43. Program to demonstrate class member functions.

#include<iostream>
using namespace std;

class Student{
public:
    void Display()
    {
        cout<<"This is a Student Class:";
    }
};
int main()
{
    Student S;
    S.Display();
    return 0;
}