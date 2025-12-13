// Merge Overlapping Subintervals

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> ans;

    // Step 1: sort intervals
    sort(arr.begin(), arr.end());

    // Step 2: start with first interval
    ans.push_back(arr[0]);

    // Step 3: merge logic
    for (int i = 1; i < arr.size(); i++)
    {
        // overlap condition
        if (ans.back()[1] >= arr[i][0])
        {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
        else
        {
            ans.push_back(arr[i]);
        }
    }

    // Output
    for (auto &interval : ans)
    {
        cout << interval[0] << " " << interval[1] << endl;
    }

    return 0;
}
