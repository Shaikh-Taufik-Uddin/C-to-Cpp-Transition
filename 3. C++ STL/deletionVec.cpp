#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(7, 1);

    for (auto it : v)
    {
        cout << it << endl;
    }
    v.erase(v.begin() + 1); // the given position (index 1) will be deleted and and the vector will be re-shuffled

    for (auto it : v)
    {
        cout << it << endl; // 4 1s are printed
    }
    v.erase(v.begin(), v.begin() + 3); // this will delete the elements from index 0 to index 2 (because erase() takes starting and ending arguments and the ending argument points at one location ahead of the actual end) NOT index 3)
    // so give +1 to index of what element you want to delete using erase()
    return 0;
}