#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << char(i + 64); 
        }
        cout << endl;
    }
    return 0;
}