//57. Program to show order of constructor execution.

#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Student\n";
    }
};

class Result : public Student {
public:
    Result() {
        cout << "Result \n";
    }
};

int main() 
{
    Result r;
    return 0;
}