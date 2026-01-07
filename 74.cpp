//74. Program with constant member function.

#include <iostream>
using namespace std;

class Student {
    int marks;
public:
    Student(int m) {
        marks = m;
    }
    void show() const {
        cout << "Marks = " << marks;
    }
};

int main() 
{
    Student s(90);
    s.show();
    return 0;
}
