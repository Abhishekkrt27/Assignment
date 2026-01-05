//62. Program to differentiate local & member variables using this.

#include<iostream>
using namespace std;

class Student{
public:
    int marks;
    void set(int marks)
    {
        this->marks=marks;
    }
    void show()
    {
        cout<<"Marks= "<<marks;
    }
};
int main()
{
    Student S;
    S.set(98);
    S.show();
    return 0;
}