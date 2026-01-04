//53. Program with multiple constructors.

 #include<iostream>
 using namespace std;

 class Student{
public:
    Student(){
        cout<<"This is a default constructor."<<endl;
    }
    Student(int roll){
        cout<<"Enter Roll No:"<<roll<<endl;
    }
 };
 int main()
 {
    Student S1;
    Student S2(22);
    return 0;
 }