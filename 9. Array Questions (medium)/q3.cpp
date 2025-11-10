// Given an array of N integers, write a program to return an element that occurs more than N / 2 times in the given array.You may consider that such an element always exists in the array.

// Moore's Voting algorithm

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {4, 4, 2, 4, 3, 4, 4, 3, 2, 4};
    int cnt = 0, el;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            el = arr[i];
        }
        else if (arr[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    cout << el;
    return 0;
}

/*In some versions, after finding el, we verify it by counting its frequency once more to confirm it really is > N/2 (if not guaranteed by the problem).
int count = 0;
for (int num : arr)
    if (num == el) count++;

if (count > n / 2)
    cout << el;
else
    cout << "No majority element";
*/