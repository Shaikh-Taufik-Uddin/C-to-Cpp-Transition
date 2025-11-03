#include <bits/stdc++.h>
using namespace std;
void check(string &s, int begin, int size) // void recursive function
{
    if (begin >= size)
    {
        cout << "palindrome";
        return;
    }
    if (s[begin] != s[size])
    {
        cout << "Not palindrome";
        return;
    }
    check(s, begin + 1, size - 1);
}
int main()
{
    string s = "malayalam";
    int size = s.size() - 1;
    check(s, 0, size);
    return 0;
}