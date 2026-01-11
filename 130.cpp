//130. Program to append data to a file

#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ofstream file("new.txt", ios::app);
    file << "I am a Engineering studemt.";
    file.close();
    cout << "Data appended";
    return 0;
}
