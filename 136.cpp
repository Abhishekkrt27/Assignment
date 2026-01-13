//136. Program checking if file exists.

#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ifstream file("data.txt");
    if (file)
        cout << "File exists";
    else
        cout << "File does not exist";
    file.close();
    return 0;
}
