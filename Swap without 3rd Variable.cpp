//3. Program to swap two numbers using a third variable.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Value after swaping"<<endl;
    cout<<"1st number:"<<a<<endl;
    cout<<"2nd number:"<<b<<endl;
    return 0;

}