//69. Program showing “friendship is not mutual”.

#include<iostream>
using namespace std;


class Student{
    
public:
    int roll;
    Student(int r)
    {
        roll=r;
    }
    friend class marks;
};
class Result{
private:
    int marks;
public:
    Result(int m)
    {
        marks=m;
    }
    void show(Student S)
    {
        cout<<"Student Roll no= "<<S.roll <<endl;
    }
};

int main() 
{
    Student S(101);
    Result R(90);
    R.show(S);
    return 0;
}