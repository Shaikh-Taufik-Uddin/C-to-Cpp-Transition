#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5, 1);
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) // doing it iterator wise
    {
        cout << *it << endl;
    }
    return 0;
}
