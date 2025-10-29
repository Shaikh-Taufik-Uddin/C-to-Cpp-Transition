// as 7 is written in binary like 111 soo built in pop count returns the no of 1's in a value
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 7;
    int cnt = __builtin_popcount(num); // returns 3 , the number of 1's 
    cout << cnt;
    // if the number is long long its becomes __builtin_popcountll()
    return 0;
}