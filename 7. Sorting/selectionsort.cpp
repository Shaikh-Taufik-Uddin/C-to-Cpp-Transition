#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 5, 7, 6};
    for (int i = 0; i < 6; i++) // total rounds to sort
    {
        int min = INT_MAX, mindx; // inner sorting in each round
        for (int j = i; j < 6; j++)
        {
            if (arr[j] < min) // finds minimum
            {
                min = arr[j];
                mindx = j;
            }
        }
        int temp = arr[i]; // swaps
        arr[i] = arr[mindx];
        arr[mindx] = temp;
    }
    for (auto it : arr)
    {
        cout << it;
    }
    return 0;
}

// O(n2) for all cases