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
    void setter(int r) // we cannot call a constructor twice so if we need to change something we can access private attributes by a setter
    {
        roll = r;
    }
    string getter()
    {
        cout << roll;
        return name;
    }
};

int main()
{
    Student s = {"Taufik", 1, 6, 'A'};
    s.setter(4); // setter called and roll set to 4
    cout << s.getter();
    return 0;
}