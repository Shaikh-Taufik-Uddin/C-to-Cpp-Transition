// doesn't store only uniquw occurences but maintains sorted manner
#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(1);
    ms.emplace(1);
    ms.insert(0);
    ms.insert(0);
    ms.insert(5);
    ms.emplace(8);
    ms.insert(0);
    ms.insert(0);
    cout << ms.count(1); // counts occurences of a value
    ms.erase(1); // this will delete ALL occurence of 1
    ms.find(0);// finds 1 as iterator
    ms.erase(ms.find(0)); // only ONE occurence of 0 will be removed 
    // what we did there is gave an address in the erase funtion to delete
    auto it1 = ms.find(1); // points to the first 1
    auto it2 = it1;
    advance(it2, 2); // move it2 forward by 2 positions
    ms.erase(it1, it2);
    return 0;
}