//46. Program to compare two objects.

#include<iostream>
using namespace std;

class Student{
public:
    int marks;
};
int main()
{
    Student S1,S2;
    S1.marks=95;
    S2.marks=98;

    if(S1.marks>S2.marks)
    {
        cout<<"Student 1 scored higher.";
    }
    else{
        cout<<"Student 2 scored higher.";
    }
    return 0;
}
