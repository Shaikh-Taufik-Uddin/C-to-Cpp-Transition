// Length of the longest subarray with zero Sum

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {6, -2, 2, -8, 1, 7, 4, -10};
    int n = arr.size();
    int prefixsum = 0;
    int length = 0;
    int maxlength = 0;
    int target = 0;
    // cout << "Enter target sum : ";
    // cin >> target;
    unordered_map<int, int> mpp;
    mpp[0] = -1;
    for (int i = 0; i < n; i++)
    {
        prefixsum += arr[i];
        int neededsum = prefixsum - target;
        if (mpp.find(neededsum) != mpp.end())
        {
            length = i - mpp[neededsum];
        }
        maxlength = max(maxlength, length);
        if (mpp.find(prefixsum) == mpp.end())
        {
            mpp[prefixsum] = i;
        }
    }
    cout << maxlength;
    return 0;
}