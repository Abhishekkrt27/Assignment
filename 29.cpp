//29. Program demonstrating break and continue.

#include <iostream>
using namespace std;

int main() 
{
    for (int i = 1; i <= 10; i++) {
        if (i == 5)
            continue;  

        if (i == 9)
            break;      

        cout << i << " ";
    }
    return 0;
}