//9. Program to compute area of circle, triangle, rectangle.
#include<iostream>
using namespace std;
int main(){
    int r,s,l,b;
    float a,c,d;
    cout<<"Enter the radius of circle:";
    cin>>r;
    cout<<"Enter the side of square:";
    cin>>s;
    cout<<"Enter the length and breadth of rectangle:";
    cin>>l>>b;

    a=2*3.14*r;
    cout<<"Area of circle:"<<a<<endl;

    c=s*s;
    cout<<"Area of square:"<<c<<endl;

    d=l*b;
    cout<<"Area of rectangle:"<<d<<endl;

    return 0;
}