#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 2, 9, 6};
    for (int i = 1; i < 6; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            // or use swap function swap(arr[j-1],arr[j]) ;
            j--;
        }
    }
    for (auto it :arr)
    {
        cout << it;
    }
    return 0;
}

// worst and avg case are of O(n2) complexity but for best case is O(n)
