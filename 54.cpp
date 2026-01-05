//54. Program with copy constructor.

#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    Student(int r) {
        roll = r;
    }

    Student(Student &s) {
        roll = s.roll;
    }
};

int main() {
    Student s1(101);
    Student s2(s1);

    cout << "Copied roll: " << s2.roll;
    return 0;
}