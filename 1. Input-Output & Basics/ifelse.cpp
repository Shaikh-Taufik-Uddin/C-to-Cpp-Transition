// same as in c
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult";
    }
    else
    {
        cout << "Go back ! coding ain't for kids ";
    }
    return 0;
}
