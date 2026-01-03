//47. Program to find largest of two numbers using class.

#include<iostream>
using namespace std;

class Number{
public:
    int a,b;
    void input()
    {
        cout<<"Enter value for a:";
        cin>>a;
        cout<<"Entaer value for b:";
        cin>>b;
    }
    void largest()
    {
        if(a>b)
            cout<<a<<" is largest.";
        else
            cout<<b<<" is largest.";
    }
};
int main()
{
    Number N;
    N.input();
    N.largest();

    return 0;
}