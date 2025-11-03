// just printing in reverse 

/*#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n)
{
    if (n < 0)
    {
        return;
    }
    cout << arr[n];
    reverse(arr, n - 1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 4);
    return 0;
}*/

// using 2 pointers

#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int a, int b)
{
    if (a >= b)
    {
        return;
    }
    int temp = arr[b];
    arr[b] = arr[a];
    arr[a] = temp;
    reverse(arr, a + 1, b - 1);
    return;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 0, 4);
    for (auto it : arr)
    {
        cout << it;
    }
    return 0;
}