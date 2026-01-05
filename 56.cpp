//56. Program with destructor showing object destruction.

#include<iostream>
using namespace std;

class Student{
public:
    ~Student(){
        cout<<"Destructor.";
    }
};
int main()
{
    Student S;
    return 0;
}