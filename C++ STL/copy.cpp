#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5, 1);
    vector<int> b(2, 6);
    v.insert(v.begin()+2, b.begin(), b.end()); // v.begin states from where to start pasting the copied vector , b.begin and b.end copies the whole b vector and insert pastes it 
    for (auto i : v)
    {
        cout << i;
    }
    return 0;
}