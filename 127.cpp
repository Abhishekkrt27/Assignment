//127. Program reading from a file


// until sace or new line not found
/*  
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    string text;
    ifstream file("data.txt");
    file >> text;
    cout << text;
    file.close();
    return 0;
}  
*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    ifstream file("data.txt");

    if (!file) {
        cout << "File not found";
        return 0;
    }

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
