//61. Program demonstrating this pointer.

#include<iostream>
using namespace std;

class Student{
public:
    int roll;
    void set(int roll)
    {
        this->roll=roll;
    }
    void show()
    {
        cout<<"Roll No= "<<roll;
    }
};
int main()
{
    Student S;
    S.set(03);
    S.show();
    return 0;
}