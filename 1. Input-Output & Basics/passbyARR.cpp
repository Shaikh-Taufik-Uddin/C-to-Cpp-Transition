/*#include <bits/stdc++.h>
using namespace std;
void worker(int brr[2][2]) // we need to specify the length here for multi dimentional arrays unlike 1d arrays atleast brr[][2] like this .
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> brr[i][j];
        }
    }
}
int main()
{
    int arr[2][2];
    worker(arr);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j];
        }
    }
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
void insert(int arr[]) // for arrays we dont need to write & before it because of its default pass by ref. nature 
{
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int arr[5];
    insert(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}