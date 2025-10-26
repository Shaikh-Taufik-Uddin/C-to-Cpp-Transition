#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ="hello";
    int length = s.size();
    cout << s[length-3];
    s[0]='G';
    cout << s;
    return 0;
}