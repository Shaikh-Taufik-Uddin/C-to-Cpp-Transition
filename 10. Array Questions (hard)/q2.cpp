// Find the elements that appears more than N/3 times in the array

// better solution
/*
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 1, 1, 3, 2, 2};
    int n = arr.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] += 1;
        if (mpp[arr[i]] > (n / 3))
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}
*/
// optimal solution ((Boyer–Moore Majority Vote Algorithm)

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 1, 1, 3, 2, 2};
    int n = arr.size();
    int el1 = INT_MIN;
    int count1 = 0;
    int el2 = INT_MIN;
    int count2 = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (count1 == 0 && arr[i] != el2)
        {
            el1 = arr[i];
            count1 = 1;
        }
        else if (count2 == 0 && arr[i] != el1)
        {
            el2 = arr[i];
            count2 = 1;
        }
        else if (arr[i] == el1)
        {
            count1++;
        }
        else if (arr[i] == el2)
        {
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el1)
        {
            count1++;
        }
        else if (arr[i] == el2)
        {
            count2++;
        }
    }
    if(count1 > (n/3))
    {
        ans.push_back(el1);
        cout << el1 << endl;
    }
    if (count2 > (n / 3))
    {
        ans.push_back(el2);
        cout << el2 << endl;
    }
    return 0;
}
// they differ in space complexity, but NOT in time complexity