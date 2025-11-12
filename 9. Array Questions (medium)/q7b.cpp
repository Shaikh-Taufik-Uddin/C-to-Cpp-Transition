// There’s an array ‘A’ of size ‘N’ with positive and negative elements (not necessarily equal). Without altering the relative order of positive and negative elements,
// you must return an array of alternately positive and negative values. The leftover elements should be placed at the very end in the same order as in array A.

// brute force

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, -4, -5, 3, 4};
    vector<int> pos, neg, res;

    // Separate positive and negative elements
    for (auto it : arr)
    {
        if (it > 0)
            pos.push_back(it);
        else
            neg.push_back(it);
    }

    int p = 0, n = 0;
    int i = 0;

    // Alternate until one list is exhausted
    while (p < pos.size() && n < neg.size())
    {
        if (i % 2 == 0)
            res.push_back(pos[p++]);
        else
            res.push_back(neg[n++]);
        i++;
    }

    // Append remaining positives
    while (p < pos.size())
        res.push_back(pos[p++]);

    // Append remaining negatives
    while (n < neg.size())
        res.push_back(neg[n++]);

    // Print result
    for (auto it : res)
        cout << it << " ";

    return 0;
}

// there exits no optimal solution for this varient of this problem
