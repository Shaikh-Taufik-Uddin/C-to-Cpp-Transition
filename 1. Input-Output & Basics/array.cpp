#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1d array
    // int arr[3];
    // cin >> arr[0] >> arr[1] >> arr[2];
    // arr[2] += 69;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i];
    // }
    // 2d array
    int brr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> brr[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << brr[i][j];
        }
    }
    return 0;
}