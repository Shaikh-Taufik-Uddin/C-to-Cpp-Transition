#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {4, 2, 2, 6, 4};
    int n = arr.size();
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int target=0 ;
    int prexr = 0;
    int reqxr;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        prexr ^= arr[i];
        reqxr = prexr ^ target;
        cnt += mpp[reqxr];
        mpp[prexr]++;
    }
    cout << cnt;
    return 0;
}