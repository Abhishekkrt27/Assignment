//44. Program to read and display employee details using class.

#include<iostream>
#include<string>
using namespace std;

class Employee{
public:
    string name;
    int id;

    void input()
    { 
        cout<<"Enter Employee Name:";
        getline(cin,name);
        cout<<"Enter Employee ID:";
        cin>>id;
    }
    void Display()
    {
        cout<<"Employee Name:"<<name<<endl;
        cout<<"Employee ID:"<<id<<endl;
    }
};
int main()
{
    Employee E;
    E.input();
    E.Display();
    return 0;
}