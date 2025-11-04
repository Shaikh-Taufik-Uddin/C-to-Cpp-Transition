#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 23, 4, 67, 65, 2};
    for (int i = 0; i < 6; i++)
    {
        bool swap = false; //optimization 
        for (int j = 0; j < 6 - i - 1; j++) // j<5 to avoid out of bound error else when (j<6 condition) i=0 and j=5 it will try to access j+1 thats arr[6] that doesnt exist
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = true;
            }
        }
        if (swap == false)
        {
            break;
        }
    }
    for (auto it : arr)
    {
        cout << " " << it;
    }
    return 0;
}

// time complexity for worst and avg case will be O(n2) but if optimizations are done then o(n) for best case only 