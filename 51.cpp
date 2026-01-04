//51. Program with default constructor.

#include <iostream>
using namespace std;

class Student 
{
public:
    Student() 
    {
        cout << "Default constructor";
    }
};

int main() 
{
    Student s;
    return 0;
}