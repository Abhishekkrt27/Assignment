//126. Program writing to a file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");
    file << "My name is Abhishek.";
    file.close();
    cout << "Data is Written";
    return 0;
}
