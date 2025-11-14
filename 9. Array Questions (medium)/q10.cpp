// You are given an array of ‘N’ integers.You need to find the length of the longest sequence which contains the consecutive elements.

// better solution
/*
#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {100, 200, 1, 3, 2, 4};
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int lastsmaller = INT_MIN;
    int cnt = 0;
    int longest=1;
    for (int i = 0; i < n;i++)
    {
        if(arr[i]-1==lastsmaller)
        {
            cnt++;
            lastsmaller = arr[i];
        }
        else
        {
            cnt = 1;
            lastsmaller = arr[i];
        }
        longest = max(longest, cnt);
    }
} */

// optimal solution

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;
int main()
{
    vector<int> arr = {100, 200, 1, 3, 2, 4};
    int n = arr.size();
    unordered_set<int> s;
    int cnt = 0, x, longest = 1;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    for (auto it : s)
    {
        if (s.find(it - 1) == s.end())
        {
            cnt = 1;
            x = it;
            while (s.find(x + 1) != s.end())
            {
                x = x + 1;
                cnt++;
            }
            longest = max(longest, cnt);
        }
    }
    return 0;
}