// find maximum consecutive 1's in an array
// optimal 

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 1, 0, 0, 1, 1, 1, 1};
    int n = arr.size();
    int max = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            if (cnt > max)
            {
                max = cnt;
            }
        }
        else
        {
            cnt = 0;
        }
    }
    cout << max;
    return 0;
}