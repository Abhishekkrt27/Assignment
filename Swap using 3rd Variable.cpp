//3. Program to swap two numbers using a third variable.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Value after swaping"<<endl;
    cout<<"1st number:"<<a<<endl;
    cout<<"2nd number:"<<b<<endl;
    return 0;

}