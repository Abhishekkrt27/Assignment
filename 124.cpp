//124. Program using setw and setprecision

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float num = 12.3456;
    cout << setw(7) << num << endl;
    cout << fixed << setprecision(2) << num;
    return 0;
}
