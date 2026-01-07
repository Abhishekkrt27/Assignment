//71. Program with static data member.

#include<iostream>
using namespace std;

class Student{
public:
    static int count;
};
int Student::count=10;

int main()
{
    cout<<"Student Count= "<<Student::count;
    return 0;
}