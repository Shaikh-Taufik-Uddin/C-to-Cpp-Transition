// 4 Sum | Find Quads that add up to a target value

// optimal O(n3)

// pointers are arranged like [i_j-------k_l]
// i and l keeps constant for a run and j and k moves

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int target;
    cout << "Enter your target sum : ";
    cin >> target;
    for (int i = 0; i < n; i++) // loop that determines i pointer
    {
        if (i > 0 && arr[i] == arr[i - 1]) // if i is same as previous then keep finding for a different i (i will start as left most pointer)
            continue;
        for (int l = n - 1; l > i; l--) // loop that determines l pointer
        // in the condition of loop we have kept l > i because i and l should not cross each other
        {
            if (l < n - 1 && arr[l] == arr[l + 1]) // if l is same as previous then keep finding for a different l (l will start as right most pointer)
                continue;
            int j = i + 1; // j resides right after i
            int k = l - 1; // k resides right before j
            while (j < k)  // while j and k haven't crossed each other
            {
                int sum = arr[i] + arr[j] + arr[k] + arr[l];
                if (sum > target) // if sum is greater
                {
                    k--; // reduce k
                }
                else if (sum < target) // if sum is smaller
                {
                    j++; // increase j
                }
                else // if sum reaches target
                {
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]}; // store indices
                    ans.push_back(temp);
                    j++;                                  // ditch the current j index
                    k--;                                  // ditch the current k index
                    while (j < k && arr[j] == arr[j - 1]) // find for new j that is not the same as previous one
                    {
                        j++;
                    }
                    while (j < k && arr[k] == arr[k + 1]) // find for new k that is not the same as previous one
                    {
                        k--;
                    }
                }
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}