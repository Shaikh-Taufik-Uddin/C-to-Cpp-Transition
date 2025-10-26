#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i <= 2*n-1; i++)
    {
        int stars = i;
        if(i>n)
        {
            stars = 2 * n - i;
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}