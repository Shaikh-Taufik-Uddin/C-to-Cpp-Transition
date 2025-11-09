// find the given number
// brute force is linear search 
// better is hashing 
// optimal is below 
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    int sum = 0, sum1 = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    for (auto it : arr)
    {
        sum1 = sum1 + it;
    }
    cout << sum - sum1;
    return 0;
}
*/
// XOR method (most optimal) 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 5}; // Missing 3
    int n = arr.size();

    int xor1 = 0; // XOR of all numbers from 1 to n+1
    int xor2 = 0; // XOR of all elements in array

    for (int i = 1; i <= n + 1; i++)
        xor1 ^= i;

    for (int i = 0; i < n; i++)
        xor2 ^= arr[i];

    int missing = xor1 ^ xor2;

    cout << "Missing number: " << missing << endl;
    return 0;
}
