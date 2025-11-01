#include <bits/stdc++.h>
using namespace std;
// while creating a constructor for a class if we keep the names of argument in the constructor same as the ones in class it gets confuses and throws garbage values
// to solve this problem we need to use this keyword
class Student
{
public:
    string name;
    int roll;
    int klass;
    char section;
    Student(string name, int roll, int klass, char section)
    {
        this->name = name;
        this->roll = roll;
        this->klass = klass;
        this->section = section;
    }
};
void print(Student s)
{
    cout << s.name << s.klass << s.section << s.roll;
}
int main()
{
    Student s = {"Taufik", 1, 6, 'A'};
    print(s);
    return 0;
}