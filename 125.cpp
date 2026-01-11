//125. Program demonstrating file creation

#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ofstream file("test.txt");
    cout << "File created successfully";
    file.close();
    return 0;
}
