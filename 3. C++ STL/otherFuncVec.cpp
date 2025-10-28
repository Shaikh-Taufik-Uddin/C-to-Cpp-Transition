#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5, 1);
    vector<int> b(2, 6);
    for (auto i : v)
    {
        cout << i;
    }
    cout << endl;
    v.pop_back(); // pops out the last element from the vector
    for (auto i : v)
    {
        cout << i;
    }
    cout << endl;
    v.swap(b); // swaps v vector with b
    for (auto i : v)
    {
        cout << i;
    }
    cout << endl;
    v.clear(); // erases entire vector
    for (auto i : v)
    {
        cout << i;
    }
    cout << endl;
    cout << v.size();  // tells the current vector size
    cout << endl;
    cout << v.empty(); // tells if the vector is empty or not; 1-> empty , 0-> not empty
    return 0;
}