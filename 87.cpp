//87. Program demonstrating protected inheritance.

#include <iostream>
using namespace std;

class Student {
public:
    int roll;
};

class Result : protected Student {
public:
    void show() {
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
