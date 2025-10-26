#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {   // 1st pattern
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // 2nd pattern
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // 3rd pattern
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // 4th pattern
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}