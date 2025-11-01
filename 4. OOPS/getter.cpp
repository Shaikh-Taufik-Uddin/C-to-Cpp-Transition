#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;
    int roll;
    int klass;

public:
    char section;
    Student(string n, int r, int k, char s)
    {
        name = n;
        roll = r;
        klass = k;
        section = s;
    }
    string getter() // getter function same as print function
    {
        return name;
    }
};

int main()
{
    Student s = {"Taufik", 1, 6, 'A'};
    cout << s.getter(); // getter called
    return 0;
}