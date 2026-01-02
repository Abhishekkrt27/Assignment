//36. Program for matrix multiplication.

#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], product[2][2];

    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> b[i][j];
        }
    
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            product[i][j] = a[i][j] * b[i][j];
        }
    }
    cout << "Product matrix:\n";
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}