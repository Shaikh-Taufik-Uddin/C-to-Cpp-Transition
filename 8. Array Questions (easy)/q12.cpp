// find the unique elements of two given arrays

// linear search (brute)

// hashmap method (better)

// XOR (optimal)

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 4, 3, 4};
    int xorr = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xorr = xorr ^ arr[i];
    }
    cout << xorr;
    return 0;
}