#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j) // outer loop that controlles whether to continue the cycle or not (i.e if i and j have crossed each other then stop else continue)
    {
        while (i <= high && arr[i] <= pivot) // decisive loop for i (run till greater element is not found)
        {
            i++; // increments i upon exiting
        }
        while (j >= low && arr[j] > pivot) // decisive loop for j (run till smaller element is not found)
        {
            j--; // decrements j upon exiting
        }
        if (i < j)
        {
            swap(arr[i], arr[j]); // swapper
        }
    }
    swap(arr[low], arr[j]); // current place of j is swapped for the pivot (as j decremented upon exit so current value of j is actually behind i)
    return j;
}
void sort(vector<int> &arr, int low, int high)
{
    if (low < high) // checks if there is more than 1 element in the vector
    {
        int pindex = partition(arr, low, high); // fetches the partition index
        sort(arr, low, pindex - 1);             // recursive calls to sort the left half
        sort(arr, pindex + 1, high);            // recursive calls to sort the right half
    }
}
int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int low = 0, high = 7;
    sort(arr, low, high);
    for (auto it : arr)
    {
        cout << it;
    }
    return 0;
}