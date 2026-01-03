//41. Program defining a simple class and creating objects.

#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    string dept;

    void show()
    {
        cout<<"Student Name:"<<name<<endl;
        cout<<"student Dept:"<<dept<<endl;
    }
};
int main()
{
    Student S;
    cout<<"Enter Student Name:";
    getline(cin, S.name);
    cout<<"Enter Student Department:";
    getline(cin, S.dept);

    S.show();
    return 0;
}
