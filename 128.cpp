//128. Program copying one file to another

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream src("data.txt");
    ofstream dest("copy.txt");
    string word;

    while (src >> word) {
        dest << word << " ";
    }

    src.close();
    dest.close();
    cout << "File copied";
    return 0;
}
