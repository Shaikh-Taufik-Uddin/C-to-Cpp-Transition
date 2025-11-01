#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int klass;
    char section;
    Student(string n, int r, int k, char s)
    {
        name = n;
        roll = r;
        klass = k;
        section = s;
    }
    void print()
    {
        cout << name << klass << section << roll;
    }
};
void change(Student *p) // pass by value using pointer(*) than (&)
{
    (*p).section = 'B';
    p->roll = 6;
}
int main()
{
    Student s = {"Taufik", 1, 6, 'A'};
    Student *p = &s; // we need to use student* type because it is a pointer to an object
    change(p);
    p->klass = 8; // changes the value
    // cout << (*p).klass;
    (*p).print();
    return 0;
}