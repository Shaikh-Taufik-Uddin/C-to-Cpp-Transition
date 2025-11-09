// left rotate the array by one place 
// optimal approach 

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int temp = arr[0];
    for (int i = 0; i < 4; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr.pop_back();
    arr.push_back(temp);
    for (auto it : arr)
    {
        cout << it;
    }
    return 0;
}