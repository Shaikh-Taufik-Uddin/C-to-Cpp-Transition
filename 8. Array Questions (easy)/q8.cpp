// linear search

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            cout << i;
            return 0;
        }
    }
    cout << "-1";

    return 0;
}