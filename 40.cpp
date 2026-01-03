//40. Program using structure to store student details.

#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() 
{
    Student s;

    cout << "Enter Student Name: ";
    cin.getline(s.name,100);
    cout << "Enter Student Roll no: ";
    cin >> s.roll;
    cout << "Enter Student marks: ";
    cin >> s.marks;

    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}