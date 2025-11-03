#include <iostream>
using namespace std;
int c = 0;
void print(int n, int a, int b)
{
    if (c > n)
    {
        return;
    }
    cout << a;
    c++;
    print(n, b, a + b);
}
int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    print(n, a, b);
    return 0;
}