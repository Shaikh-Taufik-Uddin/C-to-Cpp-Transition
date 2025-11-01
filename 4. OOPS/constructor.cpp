#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int klass;
    char section;
    // when we dont make any constructor manually a default constructor is there Student(){}
    // making a constructor
    Student(string n, int r, int k, char s) // parameterized constructor // a kind of function w/o any return type // pass by value type not by reference
    {
        name = n;
        roll = r;
        klass = k;
        section = s;
    }
    // this constructor overwrites the default one
    // if we intend to input values ny both the ways we need to redefine the default constructor
    Student() {}
    // multple constructors can be used for multiple tasks if i need to pass 2 attributes only for a student then i can make a const. with 2 args. only than 3
    //  and 3 args. for other students
    //  in that case const. with 2 args will work for the students with 2 attributes and ... like that
    // but 2 exactly same constructors cant be created
};
void print(Student s)
{
    cout << s.name << s.klass << s.section << s.roll;
}
int main()
{
    Student s("Taufik", 1, 6, 'A'); // maintaining order is necessary
    Student s1;
    s1.name = "raj";
    cout << s1.name << endl;
    s1 = s; // copies (deep copy)
    // constructor copy
    Student s2(s1); // s1 is copied in s2 
    print(s2);
    cout << s1.name << endl;
    print(s);
    return 0;
}