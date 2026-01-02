//38. Program to copy string manually.

#include<iostream>
using namespace std;

int main()
{
    char a[100];
    char b[100];
    int i;
    // cin.getline(Arrayname,size) to consider space
    //cin>>a , will not consider space
    cin.getline(a,100);

    for(i=0;a[i]!='\0';++i)
    {
        b[i]=a[i];
    }
    //because it show some random thing as b has no'\0'
    b[i]='\0';
    
    cout<<"User Input:"<<endl;
    cout<<a<<endl;
    cout<<"Copied string:"<<endl;
    cout<<b;
    return 0;
}