// check if an array is sorted or not

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    bool flag = false;
    for (int i = 1; i < 4; i++)
    {
        if (arr[i] >= arr[i - 1] && arr[i] <= arr[i + 1]) // arr[i]>=arr[i=1] could be written as well for i=1 to n-1 
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "sorted";
    }
    else
    {
        cout << "unsorted";
    }
    return 0;
}