//131. Program using file opening modes.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("test.txt",ios::out);
    file<<"Hello File.";
    file.close();

    cout<<"Opem the file.";
    return 0;
}