// move zeros to end

// brute force
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {0, 5, 0, 1, 0};
    vector<int> temp;
    int cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
        else
        {
            cnt++;
        }
    }
    while (cnt > 0)
    {
        temp.push_back(0);
        cnt--;
    }
    for (auto it : temp)
    {
        cout << it;
    }
    return 0;
}
*/

// optimal solution (2-pointer)

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {5, 5, 0, 1, 0};
    int j = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (auto it : arr)
    {
        cout << it;
    }
    return 0;
}