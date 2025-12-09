//11. Program to demonstrate arithmetic operators

#include<iostream>
using namespace std;
int main()
{
    int a,b, Add,Sub,Multiply;
    float Divide;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    Add=a+b;
    cout<<"Sum="<<Add<<endl;
    Sub=a-b;
    cout<<"Difference="<<Sub<<endl;
    Multiply=a*b;
    cout<<"Product="<<Multiply<<endl;
    Divide=a/b;
    cout<<"Division="<<Divide<<endl;

    return 0;

}
