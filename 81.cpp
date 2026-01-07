//81. Program for single inheritance.

#include<iostream>
using namespace std;

class Student{
public:
    int marks;
};

class Result:public Student{
public:
    void show()
    {
        marks=98;
        cout<<"Marks= "<<marks;
    }
};

int main()
{
    Result R;
    R.show();
    return 0;

}