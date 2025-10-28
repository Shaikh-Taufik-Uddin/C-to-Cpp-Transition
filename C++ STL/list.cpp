// lists are similar to vectors but with added benefit of front options etc.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(2);
    l.emplace_back(3);
    l.push_front(5);
    l.emplace_front(0);
    l.pop_back();
    l.pop_front();
    for (auto it : l)
    {
        cout << it;
    }
    return 0;
}