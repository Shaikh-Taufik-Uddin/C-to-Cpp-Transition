// given an array and a sum k we need to print the length of the longest subarray that sums to k(positive only)
// sub-array is always a contigious part of the array
// brute
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {2, 3, 5, 1, 9};
    int k = 10;
    int n = arr.size();
    int maxLen = 0;

    // Try every starting point
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        // Try every ending point
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                int len = j - i + 1;
                if (len > maxLen)
                    maxLen = len;
            }
        }
    }

    cout << "Length of longest subarray with sum " << k << " is: " << maxLen << endl;
    return 0;
} */

// better (hashmap) for only +ve s // but optimal for +ve -ve both type of numbers 
/*
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    vector<int> arr = {2, 3, 5, 1, 9};
    int k = 10;
    int n = arr.size();
    int maxlen = 0;
    int sum = 0;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }
        int rem = sum - k;
        if (mpp.find(rem) != mpp.end())
        {
            int len = i - mpp[rem];
            maxlen = max(maxlen, len);
        }
        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }
    cout << maxlen;
    return 0;
}
*/
// optimal (sliding window) 

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {2, 3, 5, 1, 9};
    int k = 10;
    int n = arr.size();
    int maxlen = 0;
    int sum = arr[0];
    int i = 0, j = 0;
    while (i < n)
    {
        while (j <= i && sum > k)
        {
            sum -= arr[j];
            j++;
        }
        if (sum == k)
        {
            maxlen = max(maxlen, i - j + 1);
        }
        i++;
        if (i < n)
        {
            sum += arr[i];
        }
    }
    cout << maxlen;
    return 0;
}