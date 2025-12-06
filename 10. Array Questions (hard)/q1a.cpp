// given the row and coloumn return the element at that position (pascal triangle)

// brute force

#include <iostream>
using namespace std;
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int element(int r, int c)
{
    int n = r - 1, m = c - 1;
    return factorial(n) / (factorial(m) * factorial(n - m));
}

int main()
{
    int r, c;
    cout << "Enter the element's row  : ";
    cin >> r;
    cout << "Enter the element's coloumn  : ";
    cin >> c;
    cout << element(r, c);
    return 0;
}

// optimal function 

/*
int ncr(int n, int r)
{
    int res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
*/