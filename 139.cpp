//139. Program to search a record in file.

#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ifstream file("data.txt");
    string word, key = "name";
    bool found = false;

    while (file >> word) 
    {
        if (word == key) 
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Word found";
    else
        cout << "Word not found";

    file.close();
    return 0;
}
