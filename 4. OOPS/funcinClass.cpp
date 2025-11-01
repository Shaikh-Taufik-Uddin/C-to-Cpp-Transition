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