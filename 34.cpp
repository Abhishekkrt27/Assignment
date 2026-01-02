//34. Program to reverse an array.

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
    cout << "Array elements are:\n";
    for (int i = 0; i <=4; i++) 
    {
        cout << arr[i] << " ";
    }
    cout<<"\n";
    cout << "Reverse Array elements:\n";
    for (int i=4; i>=0; i--) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}