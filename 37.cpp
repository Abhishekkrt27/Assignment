//37. Program for string length without using library function.

#include<iostream>
using namespace std;

int main()
{
    char a[100];
    int count=0;
    // cin.getline(Arrayname,size) to consider space
    //cin>>a , will not consider space
    cin.getline(a,100);

    for(int i=0;a[i]!='\0';i++)
    {
        count++;
    }
    cout<<"User Input:"<<endl;
    cout<<a<<endl;
    cout<<count;
    return 0;
}