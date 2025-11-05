#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    // Base Case: range == 1.
    if (n == 1)
        return;

    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    // Range reduced after recursion:
    bubble_sort(arr, n - 1); // replaces the inner extra loop in normal bubble sort 
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = 6;
    bubble_sort(arr, n);
    for (auto it : arr)
    {
        cout << " " << it;
    }
    return 0;
}