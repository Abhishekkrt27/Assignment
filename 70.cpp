//70. Program using friend to swap private values.

#include<iostream>
using namespace std;

class Student{
private:
    int marks;
public:
    Student(int m)
    {
        marks=m;
    }
    void show()
    {
        cout<<marks<<endl;
    }
    friend void swap(Student &, Student &);
};
void swap(Student &a, Student &b)
{
    int temp=a.marks;
    a.marks=b.marks;
    b.marks=temp;
}
int main()
{
    Student S1(56),S2(67);
    cout<<"Before Swap."<<endl;
    S1.show();
    S2.show();
    swap(S1,S2);
    cout<<"After swap."<<endl;
    S1.show();
    S2.show();
    cout<<" Swapped Successfully.";
    return 0;
}