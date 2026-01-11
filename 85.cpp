//85. Program for hybrid inheritance.


#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    void getRoll() 
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }
};

class Marks : virtual public Student {
public:
    int marks;

    void getMarks() 
    {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};

class Sports : virtual public Student {
public:
    int sports;

    void getSports() 
    {
        cout << "Enter Sports Marks: ";
        cin >> sports;
    }
};

class Result : public Marks, public Sports {
public:
    void display() {
        cout << "Student Roll Number: " << roll << endl;
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Marks: " << sports << endl;
        cout << "Total Marks: " << marks + sports << endl;
    }
};

int main() 
{
    Result R;

    R.getRoll();
    R.getMarks();
    R.getSports();

    R.display();

    return 0;
}
