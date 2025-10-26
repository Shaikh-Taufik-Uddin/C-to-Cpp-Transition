#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << char(j+64) ; // done by typecasting 
        }
        cout << endl;
    }
    return 0;
}