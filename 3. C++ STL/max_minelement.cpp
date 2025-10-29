#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7};
    auto it = max_element(arr, arr + 7);
    cout << it << endl; // so we can see that the upper function returns the address of maximum element
    // so lets access that location
    cout << *it << endl;
    // all of them are giving memory interpretation of the iterator
    // cout << *max_element(arr, arr + 7);
    // cout << *it;
    // int max = *max_element(arr, arr + 7);
    // cout << max;
    return 0;
}

