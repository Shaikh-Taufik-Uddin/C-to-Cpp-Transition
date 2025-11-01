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
int main()
{
    Student s1 = {"Taufik", 1, 6, 'A'};
    Student *s2 = new Student{"Raj", 2, 7, 'B'}; // this student object has no name but a pointer pointing at it
    // it has several benefits where pass by reference is needed later on
    s1.print();
    cout << "\n";
    s2->print();
    return 0;
}