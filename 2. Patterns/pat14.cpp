#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        // pattern 1
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // pattern 2
        char c = 'A';
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j <= (2*i)/2-1)
            {
                cout << c;
                c++;
            }
            else
            {
                cout << c;
                c--;
            }
        }
        // pattern 3
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}