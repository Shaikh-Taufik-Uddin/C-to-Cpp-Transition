// map is a contanier that stores unique keys and values that might be duplicate
// map stores unique KEYS (not the values) in storted order
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int /*key*/, int /*value*/> m;
    map<pair<int, int>, int> mp;
    map<pair<int, int>, pair<int, int>> mpp;
    // so map can store any data type
    // how to enter values in map
    m[1] = 2; // store value 2 in key 1
    m.insert({2, 3}); // we always need to insert in pairs
    m.insert({3, 4});
    mp.insert({{2, 4}, 6});
    mp[{2, 3}] = 10;
    mpp.insert({{3, 4}, {6, 7}});
    // mpp.emplace({{3, 4}, {6, 7}}); is not working for some reason at this time !!
    // printing
    for (auto it : m)
    {
        cout << it.first << it.second << endl;
    }
    for (auto it : mp)
    {
        cout << it.first.first << it.first.second << it.second << endl;
    }
    for (auto it : mpp)
    {
        cout << it.first.first << it.first.second << it.second.first << it.second.second << endl;
    }
    cout << m[1] << mp[{2, 4}] ;
    // mpp.insert({{3, 4}, {6, 7}}); for this to print we need to do it one by one using iterator cause this returns pair datatype that cout cant print directly
    cout << mpp[{3, 4}].first << mpp[{3, 4}].second;
    // locating an element with iterator and printing
    auto ite = m.find(1); // finds 1 and stores address and if it cannot find it points after the map towards end 
    cout << (*ite).second; // prints the value that is pointed by *ite 
    // upper and lower bound
    auto itr = m.lower_bound(1);
    auto ito = m.upper_bound(2);
    //erase , swap, size , empty are same 
    
    return 0;
}