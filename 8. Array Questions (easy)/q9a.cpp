// find the union of 2 sorted arrays

// brute force
/*
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    vector<int> arr1 = {1, 1, 1, 3, 4};
    vector<int> arr2 = {1, 2, 2, 3, 5};
    // sorted & unique => set
    set<int> s;
    for (auto it : arr1)
    {
        s.insert(it);
    }
    for (auto it : arr2)
    {
        s.insert(it);
    }
    for (auto it : s)
    {
        cout << it;
    }
    return 0;
} */

// optimal (2-pointer)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr1 = {1, 1, 1, 3, 4};
    vector<int> arr2 = {1, 2, 2, 3, 5};
    vector<int> uni;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
        {
            if (uni.empty() || uni.back() != arr1[i])
            {
                uni.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (uni.empty() || uni.back() != arr2[j])
            {
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < arr1.size())
    {
        if (uni.empty() || uni.back() != arr1[i])
        {
            uni.push_back(arr1[i]);
        }
        i++;
    }
    while (j < arr2.size())
    {
        if (uni.empty() || uni.back() != arr2[j])
        {
            uni.push_back(arr2[j]);
        }
        j++;
    }
    for (auto it : uni)
    {
        cout << it;
    }
    return 0;
}