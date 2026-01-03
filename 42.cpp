//42. Program with private and public members.

#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    int Roll;
public:
    void setRoll(int r)
    {
        Roll=r;
    }
    void show()
    {
        cout<<"Roll No:"<<Roll;
    }

};
int main()
{
    Student S;
    S.setRoll(03);
    S.show();
    return 0;
}