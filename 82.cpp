//82. Program for multilevel inheritance.

#include<iostream>
using namespace std;

class Student{
public:
    int roll;
};
class Marks:public Student{
public:
    int marks;
};
class Result:public Marks{
public:
    void show()
    {
        roll=03;
        marks=98;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Marks= "<<marks<<endl;
    }
};
int main()
{
    Result R;
    R.show();
    return 0;
}