// same as function overloading but done with operators instead
// for example '+' operator does addition for two numbers but for string it containates them
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Shaikh ";
    string s2 = "Taufik ";
    string s3 = "Uddin";
    cout << s1 + s2 + s3 << endl;
    int a = 4, b = 6, c = 9;
    cout << a + b + c;
    // this is called operator overloading
    // this is also an example of compile time polymorphism
    return 0;
}