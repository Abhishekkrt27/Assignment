//49. Program demonstrating nested classes.

#include<iostream>
using namespace std;

class Student{
public:
    class Ram{
    public:
        void message()
        {
            cout<<"This is a nested class.";
        }
    };
};
int main()
{
    Student::Ram R;
    R.message();
    return 0;
}