#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,1,1,1,1,2,2};
    unordered_map<int, int> mpp;
    int maxf = 0, minf = INT_MAX, count = 0, element = 0, minl, maxl;
    for (int i = 0; i < 7; i++)
    {
        mpp[arr[i]] += 1;   
    }
    for (auto it : mpp)
    {
        int count = it.second;
        int element = it.first;
        if (count > maxf)
        {
            maxf = count;
            maxl = element;
        }
        if (count < minf)
        {
            minf = count;
            minl = element;
        }
    }
    cout << minl << " appeared " << minf << " times" << endl;
    cout << maxl << " appeared " << maxf << " times" << endl;
    return 0;
}