// time complexity is the rate at which the time taken increases wrt the input size ; time complexity!= time taken ;
// upper bond / worst case -> big-oh notation
// average complexity -> theta notations
// lowest bond / best case -> omega notations

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // O(n2) cpmplexity
    return 0;
}

// space complexity -> auxiliary space (space required to solve a problem) + input space (space required to store the input)

// tips -> tampering with the original input for saving time/space complexity is a bad practice .. try to avoid until asked 