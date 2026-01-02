//33. Program to find second-largest element.

#include <iostream>
using namespace std;

int main() 
{
    int arr[5], max1=0,max2=0;
    int i;
    cout << "Enter 5 elements:\n";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    max1=0;
    max2=0;
    for(i=0;i<5;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
    }

    cout<<"Output:"<<endl;
    cout<<"Maximum:"<<max1<<endl;
    cout<<"Second MAximum:"<<max2<<endl;

    return 0;
}