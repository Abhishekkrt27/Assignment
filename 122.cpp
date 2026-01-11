//122. Program reading full sentence using getline.

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name;
    cout << "Enter full name: ";
    getline(cin, name);
    cout << "Name: " << name;
    return 0;
}
