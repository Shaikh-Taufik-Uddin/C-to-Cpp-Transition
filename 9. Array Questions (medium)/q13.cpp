// Spiral Traversal of Matrix

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int n = arr.size();    // number of rows
    int m = arr[0].size(); // number of columns

    // Boundaries of the current layer
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;

    vector<int> ans;

    // Continue until boundaries cross
    while (top <= bottom && left <= right)
    {
        // 1. Traverse from left → right on the top row
        for (int col = left; col <= right; col++)
        {
            ans.push_back(arr[top][col]);
        }
        top++; // move top boundary down

        // 2. Traverse from top → bottom on the right column
        for (int row = top; row <= bottom; row++)
        {
            ans.push_back(arr[row][right]);
        }
        right--; // move right boundary left

        // 3. Traverse from right → left on the bottom row (if rows remain)
        if (top <= bottom)
        {
            for (int col = right; col >= left; col--)
            {
                ans.push_back(arr[bottom][col]);
            }
            bottom--; // move bottom boundary up
        }

        // 4. Traverse from bottom → top on the left column (if columns remain)
        if (left <= right)
        {
            for (int row = bottom; row >= top; row--)
            {
                ans.push_back(arr[row][left]);
            }
            left++; // move left boundary right
        }
    }

    // Print result
    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}