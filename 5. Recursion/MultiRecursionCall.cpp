#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int last = fibo(n - 1);  // 1st recursive call
    int slast = fibo(n - 2); // 2nd recursive call
    return last + slast; // N th fibonacci 
}
/*Smaller Version
int fibo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibo(n-2)+fibo(n-1); // this statement does it all 
}*/
int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}
