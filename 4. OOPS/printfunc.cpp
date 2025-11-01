#include <bits/stdc++.h>
using namespace std;
typedef class Student
{
public:
    string name;
    int roll;
    int klass;
    char section;
} student;
void printer(student s) // pass by value not by reference so if we make a function to modify the value it wont modify the value orginally to make it by reference we need to use & before it 
{
    cout << s.name << s.klass << s.section << s.roll;
}
int main()
{
    Student s;
    s.klass = 6;
    s.name = "taufik";
    s.roll = 45;
    s.section = 'A';
    printer(s);
    return 0;
}