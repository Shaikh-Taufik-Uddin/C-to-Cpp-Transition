#include <iostream>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    int temp[high - low + 1];
    int k = 0;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[k] = arr[left];
            k++;
            left++;
        }
        else
        {
            temp[k] = arr[right];
            k++;
            right++;
        }
    }
    while (left <= mid)
    {
        temp[k++] = arr[left++];
    }
    while (right <= high)
    {
        temp[k++] = arr[right++];
    }
    for (int i = 0; i < k; i++)
    {
        arr[low + i] = temp[i]; // instead of overwriting the entire array’s beginning by arr[i] we should do low+i Otherwise, as recursion progresses, earlier parts of the array get corrupted.
    }
}
void sort(int arr[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    sort(arr, low, mid);
    sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int low = 0;
    int high = 4;
    sort(arr, low, high);
    for (auto it : arr)
    {
        cout << it;
    }
    return 0;
}
// Merge sort’s worst-case, average, and best-case time complexity are all O(n log n)
// space complexity of O(n)