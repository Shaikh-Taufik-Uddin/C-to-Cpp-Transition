#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int i, int n)
{

    // Base Case: i == n.
    if (i == n)
        return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    insertion_sort(arr, i + 1, n); // just replaces the outer loop 
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    insertion_sort(arr, 0, 5);
    for (auto it : arr)
    {
        cout << it;
    }
    return 0;
}