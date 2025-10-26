#include <bits/stdc++.h>
using namespace std;
int minimun(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(a, b) << endl;
    cout << minimun(a, b);
    return 0;
}
