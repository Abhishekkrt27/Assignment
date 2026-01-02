//17. Program Using conditional (ternary) operator.

#include <iostream>
using namespace std;

int main() 
{
    int a = 10;
    int b = 20;
    int result;
    result = (a > b) ? a : b;

    cout << "The greater number is: " << result<<endl;

    return 0;
}
