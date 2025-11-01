// when there exits functions with same name and same return types but with different arguments
#include <bits/stdc++.h>
using namespace std;
void sum(int a, int b) // when 2 args are passed automatically this function is called and executed
{
    cout << a + b;
    cout << endl;
}
void sum(int a, int b, int c) // when 3 args are passed automatically this function is called and executed
{
    cout << a + b + c;
    cout << endl;
}
void sum(int a, int b, int c, int d) // when 4 args are passed automatically this function is called and executed
{
    cout << a + b + c + d;
    cout << endl;
}
// so there are multiple form of a function 
// the same function is performing different tasks based on what is given in it (passed as arguments) 
// this is known as compile time polymorphism
int main()
{
    int a = 7, b = 6, c = 9, d = 4;
    sum(a, b);
    sum(a, b, c);
    sum(a, b, c, d);
    return 0;
}
// BUT void sum() and int sum() are not an example of overloading 