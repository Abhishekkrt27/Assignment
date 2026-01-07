//72. Program with static member function.

#include <iostream>
using namespace std;

class Student {
public:
    static void show() 
    {
        cout << "Static member function";
    }
};

int main() 
{
    Student::show();
    return 0;
}