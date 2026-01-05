//65. Program with friend class.

#include<iostream>
using namespace std;

class Student{
public:
    int marks;
    Student(int a){
        marks=a;
    }
    friend void show(Student S);
};
void show(Student S)
{
    cout<<"Marks= "<<S.marks;
}
int main()
{
    Student S(98);
    show(S);
    return 0;
}