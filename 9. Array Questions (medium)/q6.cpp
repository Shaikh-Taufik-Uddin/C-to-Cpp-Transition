/*You are given an array of prices where prices[i] is the price of a given stock on an ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/

// brute force O(n2)
/*
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int n = arr.size();
    int profit;
    int buy, sell;
    int maxp = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            profit = arr[j] - arr[i];
            if (profit > maxp)
            {
                maxp = profit;
                buy = i;
                sell = j;
            }
        }
    }
    cout << maxp << endl
         << "buy at " << arr[buy] << " sell at " << arr[sell];
    return 0;
}*/

// optimal (dynamic programming -> remembering the past ) O(n)

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int n = arr.size();
    int profit;
    int maxp = 0;
    int mini = arr[0];
    int buy, sell;
    for (int i = 1; i < n; i++)
    {
        mini = min(mini, arr[i]);
        profit = arr[i] - mini;
        // maxp = max(maxp, profit);
        if (profit > maxp)
        {
            maxp = profit;
            buy = mini;
            sell = arr[i];
        }
    }
    cout << maxp << endl
         << "buy at " << buy << " sell at " << sell ;
    return 0;
}
