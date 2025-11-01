#include <bits/stdc++.h>
using namespace std;
class Student // conventionally we keep uppercase charecter at first for name of class
{
public: // tells if class is public protected or private (default is private)
    string name;
    int roll;
    int klass;
    char section;

}; // typedef works here like c too ! but rarely used
int main()
{
    Student s; // s is an object 
    s.klass = 6; 
    // s.name = "taufik";
    s.roll = 45;
    s.section = 'A';
    cin >> s.name;
    cout << s.name << endl;
    return 0;
}
// multiple class and objects can be created as needed 