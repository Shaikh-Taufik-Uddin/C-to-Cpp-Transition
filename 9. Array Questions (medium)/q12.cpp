// Rotate Image by 90 degree

// optimal solution 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // square matrix so we can do inplace swaps
    int n = arr.size();                                          // returns row number =coloumn number
    // transpose of the array
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) // swap only upper triangle 
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // revrese the rows
    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }
    // printing the results
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}