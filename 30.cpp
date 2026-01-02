//30. Program to show use of goto.

#include<iostream>
using namespace std;

int main()
{
    int i, sum=0;
    for(i=0;i<=10;i++)
    {
        sum=sum+i;
        if(i==5)
        {
            goto Add;
        }
    }
    Add:
    cout<<"Sum is:"<<sum;
    return 0;
}