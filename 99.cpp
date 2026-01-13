//99. Program with virtual function.

#include <iostream>
using namespace std;

class Student {
public:
    virtual void show() {
        cout << "This is Student class" << endl;
    }
};

class Result : public Student {
public:
    void show() {
        cout << "This is Result class" << endl;
    }
};

int main() {
    Student *s;  
    Result r;        

    s = &r;        
    s->show();  

    return 0;
}
