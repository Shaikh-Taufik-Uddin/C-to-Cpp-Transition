// next_permutation : find next lexicographically greater permutation (assuming there exists such one)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {1, 3, 2};
    int n = arr.size();
    int idx = -1;
    for (int i = n - 2; i >= 0; i--) // finding the break point
    {
        if (arr[i] < arr[i + 1])
        {
            idx = i;
            break;
        }
    }
    for (int i = n - 1; i > idx; i--) // searching the next greater number than the breakpoint before the breakpoint
    {
        if (arr[i] > arr[idx])
        {
            swap(arr[idx], arr[i]); // swapping the breakpoint with its next greater
            break;
        }
    }
    reverse(arr.begin() + idx + 1, arr.end()); // reversing the (sorted) subarray that is formed after the breakpoint

    // answer is done

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}

/*  variation 2: If no break point → array is descending → smallest permutation
     if (idx == -1)
     {
        reverse(arr.begin(), arr.end());
     }
 */