// Remove duplicates from a sorted array

// brute force

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {2, 1, 0, 0, 2};
    map<int, int> mpp;
    for (int i = 0; i < 5; i++)
    {
        mpp[arr[i]]++;
    }
    arr.clear();
    for (auto it : mpp)
    {
        arr.push_back(it.first);
    }
    for (auto ite : arr)
    {
        cout << ite ;
    }
    cout << endl <<arr.size();
    return 0;
} */

// optimal (2 pointer method)

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 1, 2, 5};
    int i = 0;
    for (int j = 1; j < 5; j++)
    {
        if (arr[j] != arr[i]) // if unique element found
        {
            i++;             // move to the next position of current element
            arr[i] = arr[j]; // place the element there
        }
    }
    int j = 0;
    while (j <= i) // copies all i th element to respective j th element
    {
        cout << arr[j];
        j++;
    }
    return 0;
}