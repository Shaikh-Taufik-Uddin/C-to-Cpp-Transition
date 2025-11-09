// find the intersection of two given arrays

// optimal (2-pointer)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 3};
    vector<int> arr2 = {1, 2, 3, 3, 4};
    vector<int> arr3;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] == arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
    }
    for (auto it : arr3)
    {
        cout << it << " ";
    }
    return 0;
}