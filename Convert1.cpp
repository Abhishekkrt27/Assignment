// 7. Program to convert temperature (C to F).
#include<iostream>
using namespace std;
int main()
{
    float c,f;
    cout<<"Enter Temp. in Celcius:";
    cin>>c;
    f=(c*9/5)+32;
    cout<<c <<" degree Celcius is equal to "<<f <<" degree Fahrenheit";
    return 0;
}