#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "321";
    sort(s.begin(), s.end()); // if not sorted we dont get all the possible permutations
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // while the condition in while() is true the loop gets executed
    return 0;
}