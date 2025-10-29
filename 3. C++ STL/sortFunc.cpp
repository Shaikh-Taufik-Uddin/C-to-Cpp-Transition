#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 0};
    sort(arr + 2, arr + 4); // index 2 to 3 is sorted (not 4) because end() points is not included [begin,end)
    for (auto it : arr)
    {
        cout << it;
    }
    cout << endl;
    sort(arr, arr + 6); // this sorts the whole array [begin,end) iterator is given
    for (auto it : arr)
    {
        cout << it;
    }
    cout << endl;
    vector<int> v = {5, 4, 3, 2, 1};
    sort(v.begin(), v.end());
    for (auto it : v)
    {
        cout << it;
    }
    // sorting in reverse manner
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    sort(array, array + 7, greater<int>());
    // sorting in a custom order using comparator
    // the function has to be written outside the main()
    return 0;
}