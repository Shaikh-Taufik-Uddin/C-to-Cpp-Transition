// Count Subarray sum Equals K

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {3, 1, 2, 4};
    unordered_map<int, int> mpp;
    int n = arr.size(), prefixsum = 0, cnt = 0, target = 6;
    mpp[0] = 1; // 0 occured once (initialized)
    for (int i = 0; i < n; i++)
    {
        prefixsum += arr[i];             // will sum up elements
        int remove = prefixsum - target; // gets the value to be removed to get the target
        cnt += mpp[remove];              // cnt stores the occurence of [remove] (means that many subarrays could be formed)
        mpp[prefixsum] += 1;             // updates the map with another new sum
    }
    cout << cnt;
    return 0;
}