#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    // upper half
    for (int i = 0; i < n; i++)
    {
        // 1st pattern
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // 2nd pattern
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        // 3rd pattern
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        // 4th pattern
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // lower half
    for (int i = 1; i <= n; i++)
    {
        //  1st pattern
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
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
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}