#include <bits/stdc++.h>
using namespace std;
class Student
{
private: // although set by default
    // this class is now private , and can no longer be accessed outside
    string name; // e.g Student.name cannot be accessed ...
    int roll;
    int klass;

public:           // except this part is public
    char section; // Student.section can be accessed
    // BUT this constructor below has access to this private class as it is inside the class so it will take the inputs and store it
    Student(string n, int r, int k, char s) // constructor itself should be in public
    {
        name = n;
        roll = r;
        klass = k;
        section = s;
    }
    void print() // function inside class
    {
        cout << name << klass << section << roll;
    }
};

int main()
{
    Student s = {"Taufik", 1, 6, 'A'};
    s.print();
    return 0;
}