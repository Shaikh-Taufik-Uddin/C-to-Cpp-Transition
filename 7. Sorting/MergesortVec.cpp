#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp; // arrays had many quirks with indexing and all so we use vectors to simpl;ify that
    int low2nd = mid + 1;
    int begin = low;                     // backup of low
    while (low <= mid && low2nd <= high) // merger
    {
        if (arr[low] >= arr[low2nd])
        {
            temp.push_back(arr[low2nd]);
            low2nd++;
        }
        else
        {
            temp.push_back(arr[low]);
            low++;
        }
    }
    while (low <= mid) // remaining printer
    {
        temp.push_back(arr[low]);
        low++;
    }
    while (low2nd <= high) // remaining printer
    {
        temp.push_back(arr[low2nd]);
        low2nd++;
    }
    for (int i = 0; i < temp.size(); i++) // array copy till temp isnt finished
    {
        arr[begin + i] = temp[i]; // begin + i to not disturb the elements previously stored (i.e for a vector that has low set to mid+1 will start entering from mid+1+0 rather than 0 th index)
    }
}
void sort(vector<int> &arr, int low, int high) // recursive sort function
{
    if (low < high)
    {
        int mid = (high + low) / 2;
        sort(arr, low, mid);
        sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int low = 0, high = 4;
    sort(arr, low, high);
    for (auto it : arr)
    {
        cout << it;
    }
    return 0;
}