// using 1 pointer only

#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int i, int a)
{
    if (i > a / 2)
    {
        return;
    }
    swap(arr[i], arr[a - 1 - i]);
    reverse(arr, i + 1, a);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 0, 5);
    for (auto it : arr)
    {
        cout << it;
    }
    return 0;
}