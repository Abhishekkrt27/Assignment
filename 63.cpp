//63. Program with friend function accessing private data.

#include<iostream>
using namespace std;

class Student{
public:
    int roll;
    Student(int r)
    {
        roll=r;
    }
    friend void show(Student S);
};
void show(Student S)
{
    cout<<"Roll= "<<S.roll;
}
int main()
{
    Student S(03);
    show(S);
    return 0;
}