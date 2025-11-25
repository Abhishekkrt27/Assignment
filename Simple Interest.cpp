//6. Program to calculate simple interest.
#include<iostream>
using namespace std;
int main()
{
    int SI,P,R,T;
    cout<<"Enter the Principal Amount:";
    cin>>P;
    cout<<"Enter the Rate(in %):";
    cin>>R;
    cout<<"Enter the Time(Year):";
    cin>>T;

    SI=(P*R*T)/100;

    cout<<"Simple Interest:"<<SI;
    return 0;


}