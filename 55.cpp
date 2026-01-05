//55. Program to demonstrate constructor overloading.

#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Default Constructor\n";
    }

    Student(int id) {
        cout << "Student ID: " << id;
    }
};

int main() 
{
    Student s1;
    Student s2(10);
    return 0;
}