#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0) // base case
    {
        return 1;
    }
    int ans = n * fact(n - 1); // recursive call ; stored in stack
    return ans;
}
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << fact(n); // function call
    return 0;
}