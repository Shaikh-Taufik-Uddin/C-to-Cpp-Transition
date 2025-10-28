// this container stores only unique elements in a sorted manner
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.emplace(6);
    s.insert(3);
    s.insert(1);
    s.emplace(3);
    s.emplace(1);
    s.insert(0);
    // the set looks like 1,3,6 now
    auto it = s.find(3); // find() returns an iterator that points to 3
    // if we write s.find(9) now 9 is not in the set so the function returns an iterator that will be pointing to right after the end of set (for this case right after the location of 6)
    s.erase(1); // erases 1
    auto ite = s.find(0);
    s.erase(ite);       // an iterator can also be passed to erase the value at that location ;
    cout << s.count(3); // will give 1 if it can find 3 else retuns 0 ;
    // deleting multiple values
    set<int> se;
    se.emplace(6);
    se.insert(0);
    se.insert(1);
    se.emplace(3);
    se.emplace(5);
    se.insert(2);
    auto itr = se.find(1);
    auto itt = se.find(5);
    se.erase(itr, itt); // this will delete 1 to  3 in this case NOT 5 because [start,end)
    set<int> st;
    st.emplace(6);
    st.insert(0);
    st.insert(1);
    st.emplace(3);
    st.emplace(5);
    st.insert(2);
    auto idx = lower_bound(st.begin(), st.end(), 5); // int index = it-s.begin() not possible for set
    cout << distance(st.begin(), idx);              // we have to calculate distance like this
    auto upb = upper_bound(st.begin(), st.end(), 2);
    cout << distance(st.begin(), upb);
    // s.size() ; s.empty() ; s.swap(st) ; same as others
    return 0;
}