//88. Program to access base class members using derived class.

#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
};

class Result : public Student {
public:
    void set() {
        roll = 101;
    }
    void show() {
        cout << "Roll = " << roll;
    }
};

int main() 
{
    Result R;
    R.set();
    R.show();
    return 0;
}
