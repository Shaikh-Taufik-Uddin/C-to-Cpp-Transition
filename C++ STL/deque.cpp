#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(3);
    dq.push_front(5);
    dq.emplace_front(0);
    dq.pop_back();
    dq.pop_front();
    for (auto it : dq)
    {
        cout << it;
    }
    return 0;
}