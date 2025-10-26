#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (char c = 'E'-i ; c <= 'E'; c++)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}