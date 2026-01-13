//93. Program for virtual base class.

#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    void getRoll() {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }
};

class Marks :virtual public Student {
public:
    int marks;
    void getMarks() {
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

class Sports :virtual public Student {
public:
    int sports;
    void getSports() {
        cout << "Enter Sports Marks: ";
        cin >> sports;
    }
};

class Result : public Marks, public Sports {
public:
    void display() {
        cout << "\nRoll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "Sports: " << sports << endl;
        cout << "Total: " << marks + sports << endl;
    }
};

int main() {
    Result r;
    r.getRoll();
    r.getMarks();
    r.getSports();
    r.display();
    return 0;
}
