#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 4, 5, 6, 7};
    auto it = lower_bound(v.begin(), v.end(), 4); // this will return the position of 4 in the vector as an iterator
    // for upper syntax the v.begin() and v.end() defines the search range we can modify it as we like if needed
    // to get the position (index) we need to substract this address with that of v.begin()
    int index = it - v.begin();
    cout << index;
    // or
    int idx = distance(v.begin(), it);
    cout << idx;
    int finder = lower_bound(v.begin(), v.end(), 3) - v.begin(); // 3 does not exits so it goes to the immediate greater value's location and points to that thaat is index 2
    cout << finder;
    int finder2 = lower_bound(v.begin(), v.end(), 10) - v.begin(); // 10 does not exists neither does anything greater than that . so the iterator would point just after the last element
    cout << finder2;
    return 0;
}
