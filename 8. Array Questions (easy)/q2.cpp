// second largest element in an array without sorting

// brute force -> by sorting and then checking and returning the index of 2nd largest

// better approach

/* #include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {5, 1, 5, 4, 5};
    int max = INT_MIN;
    int smax = INT_MIN;
    int maxid;
    int smaxid;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxid = i;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (i == maxid)
        {
            continue;
        }
        else if (arr[i] != max && arr[i] > smax)
        {
            smax = arr[i];
            smaxid = i;
        }
    }
    cout << max << " is the maximum that is at index " << maxid << endl;
    cout << smax << " is the second meaximum that is at index " << smaxid;
    return 0;
} */

// optimal approach

#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {5, 4, 3, 2, 1}; // it was given that it contained no duplicates , if there was then we had to check for this arr[i] != max
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] < max) 
        {
            smax = arr[i];
        }
    }
    cout << smax << " is 2nd largest " << max << " is largest";
    return 0;
}