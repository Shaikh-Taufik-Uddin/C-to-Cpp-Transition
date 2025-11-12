// There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
// Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

// Brute force O(2n)
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, -4, -5};
    vector<int> pos;
    vector<int> neg;
    vector<int> res;
    int p = 0, e = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            res.push_back(pos[p]);
            p++;
        }
        else
        {
            res.push_back(neg[e]);
            e++;
        }
    }
    for (auto it : res)
    {
        cout << " " << it;
    }
    return 0;
} */

// optimal O(n)

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, -4, -5};
    int n = arr.size();
    int res[n];
    int pos = 0, neg = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            res[pos] = arr[i];
            pos += 2;
        }
        else
        {
            res[neg] = arr[i];
            neg += 2;
        }
    }
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}