// Given an integer array arr, find the contiguous subarray (containing at least one number) which has the largest sum and returns its sum and prints the subarray.

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxx = INT_MIN;
    int n = arr.size();
    int sum = 0;
    int start, end; // keeping track of the array that forms the sum
    for (int i = 0; i < n; i++)
    {
        if (sum == 0) // subarray has just begun
        {
            start = i;
        }
        sum += arr[i];  // sum up corresponding elements
        if (sum > maxx) // if new sum is greater then update
        {
            maxx = sum;
            end = i; // updating the index of the last value taken
        }
        if (sum < 0) // drop -ve sum
        {
            sum = 0; // reinitialize sum to 0
        }
        // if we are getting atleast even 1 positive sum we keep it because it might add up later with some other +ve sum
        // but we discard -ve sum because it will always affect the sum in a negetive way
    }
    cout << maxx << endl
         << start << " to " << end << endl;

    for (int i = start; i <= end; i++) // subarray printer
    {
        cout << arr[i] << " ";
    }
    return 0;
}