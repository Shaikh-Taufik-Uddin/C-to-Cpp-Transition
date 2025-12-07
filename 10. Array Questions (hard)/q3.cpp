// 3 Sum : Find triplets that add up to a zero
//(optional : or a given sum)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    sort(arr.begin(), arr.end()); // sorted array
    int n = arr.size();
    int target = 0;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1]) // if its not the first element and its same as the previous element
        {
            continue; // then do not keep i , (find unique i in each run)
        }
        int j = i + 1; // j starts right next to i
        int k = n - 1; // k starts right at the end
        while (j < k)  // till j have not crossed k
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < target)
            {
                j++; // try to increase the sum as its lower than target (by increasing j index)
                // here the same elements of j will be automatically ignored because sum wont change for same elements
            }
            else if (sum > target)
            {
                k--; // try to decrease the sum as its higher than target (by decreasing k index)
                // here the same elements of k will be automatically ignored because sum wont change for same elements
            }
            else // means target is reached
            {
                vector<int> temp = {arr[i], arr[j], arr[k]}; // store the elements in a temp vector
                ans.push_back(temp);                         // store the answer vector
                j++;                                         // increase the index (as for this we has just checked)
                k--;                                         // decrease the index (as for this we has just checked)
                while (j < k && arr[j] == arr[j - 1])        // keep increasing j if it is found to be same as the previous one
                {
                    j++;
                }
                while (j < k && arr[k] == arr[k + 1]) // keep decreasing k if it is found to be same as the previous one
                {
                    k--;
                }
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

