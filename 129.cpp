//129. Program counting words in a file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");
    string word;
    int count = 0;

    while (file >> word) {   // reads word by word
        count++;
    }

    cout << "Word count = " << count;
    file.close();
    return 0;
}
