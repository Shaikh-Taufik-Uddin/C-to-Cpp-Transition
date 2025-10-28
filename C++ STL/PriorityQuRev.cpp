// same as priority queue but stores the least value on top
// queue uses FIFO
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(10); // emplace also works
    q.push(2);
    q.push(8);
    q.pop(); // deletes 1st element of q which is 2 .. the smallest number
    cout << q.size() << q.empty();
    priority_queue<int, vector<int>, greater<int>> qu;
    qu.push(6);
    qu.push(7);
    qu.push(8);
    q.swap(qu);
    return 0;
}

// the deafult queue is actually like this -> priority_queue<int, vector<int>, less<int>> pq;