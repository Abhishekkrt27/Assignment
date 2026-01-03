//45. Program to perform arithmetic operations using class.

#include<iostream>
using namespace std;

class Arithmatic{
public:
    int a,b;
    int sum,difference,product;
    float division;
    void input()
    {
        cout<<"Enter Value for a:";
        cin>>a;
        cout<<"Enter Value for b:";
        cin>>b;
    }
    void operation()
    {
        sum=a+b;
        difference=a-b;
        product=a*b;
        division=a/b;
    }
    void Display()
    {
        cout<<"Sum="<<sum<<endl;
        cout<<"Difference="<<difference<<endl;
        cout<<"Product="<<product<<endl;
        cout<<"Division="<<division<<endl;

    }
};
int main()
{
    Arithmatic A;
    A.input();
    A.operation();
    A.Display();

    return 0;
}

