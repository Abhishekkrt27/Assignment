//75. Program implementing Abstract Data Type (Stack).

#include <iostream>
using namespace std;

class Student {
    int stack[5];
    int top;
public:
    Student() {
        top = -1;
    }

    void push(int x) {
        stack[++top] = x;
    }

    void pop() {
        cout << "Popped = " << stack[top--];
    }
};

int main() {
    Student s;
    s.push(10);
    s.push(20);
    s.pop();
    return 0;
}
