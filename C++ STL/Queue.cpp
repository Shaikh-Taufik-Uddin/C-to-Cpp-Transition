// queue uses FIFO
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3); // emplace() also works 
    cout << q.front();
    cout << q.back();
    q.back() += 2; // adds 2 to the last member of q
    q.pop();       // deletes 1st element of q
    cout << q.front();
    cout << q.size() << q.empty();
    queue<int> qu;
    qu.push(6);
    qu.push(7);
    qu.push(8);
    q.swap(qu);
    return 0;
}