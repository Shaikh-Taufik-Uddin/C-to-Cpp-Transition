#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int a = i;
            if (a > n)
                a = 2 * n - i;
            int b = j;
            if (b > n)
                b = 2 * n - j;
            cout << (n + 1) - (min(a, b));
        }
        cout << endl;
    }
    return 0;
}