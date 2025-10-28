#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5, 1);
    v.insert(v.begin(), 5);         // inserts 5 in the beginning
    v.insert(v.begin() + 2, 6);     // inserts 6 in index 2
    v.insert(v.end(), 7);           // inserts 7 after the last element as end() points just after the last element
    v.insert(v.begin() + 3, 5, 10); // 5 10's are inserted in the 3rd index
    for (auto i : v)
    {
        cout << i;
    }
    return 0;
}