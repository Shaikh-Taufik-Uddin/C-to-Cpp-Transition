#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string name;
    int id;
    Employee(string n, int i) // a constructor is created removing the deafult constructor
    {
        name = n;
        id = i;
    }
};
class Intern : public Employee
{
public:
    int salary;
    int experience;
    Intern(string n, int i, int s, int e) : Employee(n, i)
    // made a constructor for Intern and passed the n amd i values in the constructor of Employee
    {
        salary = s;
        experience = e;
    }
    void print()
    {
        cout << name << " has id " << id << " gets a salary of $" << salary << " and has an experience of " << experience << " years";
    }
};
int main()
{
    // Intern has no default constructor now because it inherited from a class that has a user defined constructor resulting in the deletion of the deafault constructor
    Intern i = Intern("Taufik", 1985, 1000, 5);
    i.print();
    return 0;
}