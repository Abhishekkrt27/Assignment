//50. Program to count number of objects using static variable.

#include<iostream>
using namespace std;

class Counter{
public:
    static int count;
    Counter()
    {
        count++;
    }
    
    void display()
    {
        cout<<"The number of object created is: "<<count;

    }

};
int Counter::count=0;

int main()
{
    Counter C1,C2,C3,C4;
    C1.display();/*Because 4 objects were already created before display(),
                 So as we call the function display() using any onject C1,c2,c3,c4 it gives the same output */

    return 0;
}