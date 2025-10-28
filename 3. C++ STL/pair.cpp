#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair datatype
    // lies inside utility library
    pair<int, int> p = {1, 2}; // pair is the datatype , int are the datatype of stored value in it & p is the variable name
    cout << p.first << p.second << endl;
    // nested pair
    pair<pair<int, int>, pair<int, int>> g = {{1, 2}, {3, 4}};
    // printing pairs
    cout << g.first.first << g.first.second << g.second.first << g.second.second;
    // pair array (arr[] of datatype pair like int arr[])
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}}; // {1,2} are pairs and arr[] is made up with such 3 elements
    // looks similar to a 2D array
    // printing
    cout << arr[0].first << arr[0].second; // prints 1st pair of 1st element of array
    return 0;
}