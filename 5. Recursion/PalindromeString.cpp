#include <bits/stdc++.h>
using namespace std;

bool check(auto a, auto b)
{
    if (a >= b)
        return true;
    if (*a != *b)
        return false;
    return check(a + 1, b - 1);
    // returns a value instead of just doing something
    // this is called a functional recursive fucntion
}

int main()
{
    string s = "malayalam";
    bool result = check(s.begin(), s.end() - 1);

    if (result)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
