// same as queue but the largest element is always the top
// queue uses FIFO
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(10); // emplace also works
    q.push(2);
    q.push(8);
    q.pop(); // deletes 1st element of q which is 10 .. the largest number
    cout << q.size() << q.empty();
    priority_queue<int> qu;
    qu.push(6);
    qu.push(7);
    qu.push(8);
    q.swap(qu);
    return 0;
}