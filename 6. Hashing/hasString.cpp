#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "MalayalaM";
    int str[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        str[s[i]] += 1;
    }
    char q;
    cout << "find occurence of : ";
    cin >> q;
    cout << q << " appeared " << str[q] << " times";
    return 0;
}

// for lower case only or upper case only(-A)
/*int hash[26] = {0};
for (int i = 0; i < s.size(); i++)
{
    hash[s[i] - 'a']++;
}*/