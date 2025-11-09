// given an array and a sum k we need to print the length of the longest subarray that sums to k(positive and negetive both)

// better for only +ve s // but optimal for +ve -ve both type of numbers

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

        sum += arr[i]; // sums from o to i and stores
        if (sum == k)  // if subarray starts from beginnig
        {
            maxlen = max(maxlen, i + 1); // update length
        }
        int rem = sum - k;              // if subarray starts from somewhere middle
        if (mpp.find(rem) != mpp.end()) // check if the needed sum = current sum-k has existed previously or not
        // example if we need k = 3 and current sum is 9 so we check if 9-3=6 existed before or not ?
        // if yes then the subarray starts from the ending of that index till where sum was 6
        {
            int len = i - mpp[rem];    // find length
            maxlen = max(maxlen, len); // update length
        }
        if (mpp.find(sum) == mpp.end()) // if such sum not found
        {
            mpp[sum] = i; // store the sum
        }
    }
    cout << maxlen;
    return 0;
}