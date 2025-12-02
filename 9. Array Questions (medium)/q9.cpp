// leaders in array

// brute force
/*
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    // vector<int> arr = {4, 7, 1, 0};
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    vector<int> lead;
    int n = arr.size();
    int max = INT_MIN;
    bool flag;
    for (int i = 0; i < n ; i++)
    {
        flag = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            lead.push_back(arr[i]);
        }
    }
    for (auto it : lead)
    {
        cout << it << " ";
    }
    return 0;
} */

// optimal

#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {4, 7, 1, 0};
    int n = arr.size();
    int maxx = INT_MIN;
    vector<int> lead;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxx) // if new maximum is found
        {
            lead.push_back(arr[i]); // store the maximum
            maxx = arr[i] ; 
        }
        // maxx = max(arr[i], maxx); // update maximum
    }

    // sort(lead.begin(), lead.end());

    reverse(lead.begin(), lead.end());
    for (auto it : lead)
    {
        cout << it << " ";
    }
    return 0;
}

