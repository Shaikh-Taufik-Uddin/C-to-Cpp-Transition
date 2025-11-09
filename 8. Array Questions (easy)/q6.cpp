// left rotate the array by k places

/* #include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr2;

    int k;
    int n = arr.size();
    cout << "rotate by : ";
    cin >> k;
    if (k > n)
    {
        k = k % n;
    }
    for (int i = k; i < arr.size(); i++)
    {
        arr2.push_back(arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        arr2.push_back(arr[i]);
    }
    for (auto it : arr2)
    {
        cout << it;
    }
    return 0;
} */

// optimal solution ->

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k;
    int n = sizeof(arr) / sizeof(arr[0]); // returns the actual size of array
    cout << "rotate by : ";
    cin >> k;
    if (k > n)
    {
        k = k % n;
    }
    /*reverse(begin,end) reverses elements from index 0 to (k − 1) — because the second iterator (arr + k) is exclusive, meaning it points just past the last element you want to reverse.*/
    reverse(arr, arr + k); 
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
    for(auto it : arr)
    {
        cout << it;
    }
    return 0;
}