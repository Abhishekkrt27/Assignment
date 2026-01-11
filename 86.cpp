//86. Program demonstrating private inheritance.

#include <iostream>
using namespace std;

class Student {
public:
    int roll;
};

class Result : private Student {
public:
    void show() 
    {
        roll = 101;
        cout << "Roll = " << roll;
    }
};


int main() 
{
    Result R;
    R.show();
    return 0;
}
