#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
    {
        return;
    }
    print(n - 1);
    cout << n; // wrote this after the function so made it the opposite way
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}