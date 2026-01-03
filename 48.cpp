//48. Program to calculate area using class object.

#include<iostream>
using namespace std;

class Area{
public:
    int r,l,b,s,a,h;
    float circle,rectangle,square,triangle;
    
    void input()
    {
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
        cout<<"Enter side of square:";
        cin>>s;
        cout<<"Enter base and height of triangle:";
        cin>>a>>h;
    }
    void operation()
    {
        circle=3.14*r*r;
        rectangle=l*b;
        square=s*s;
        triangle=0.5*a*h;

    }
    void Display()
    {
        cout<<"Area of Circle:"<<circle<<endl;
        cout<<"Area of Rectangle:"<<rectangle<<endl;
        cout<<"Area of Square:"<<square<<endl;
        cout<<"Area of Triangle:"<<triangle<<endl;

    }
};
int main()
{
    Area A;
    A.input();
    A.operation();
    A.Display();

    return 0;
}