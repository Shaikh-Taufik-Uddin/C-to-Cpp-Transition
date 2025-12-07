// given the row number print the whole row (pascal triangle)

// brute force
/*
#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int element(int row, int col)
{
    return factorial(row) / (factorial(col) * factorial(row - col));
}
int main()
{
    int row;
    cout << " enter row number : ";
    cin >> row;
    for (int col = 1; col <= row; col++)
    {
        cout << element(row - 1, col - 1);
    }
    return 0;
}
*/

// optimal

#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << " enter row number : ";
    cin >> row;
    int element = 1;
    cout << element;
    for (int col = 1; col < row; col++)
    {
        element = element * (row - col);
        element = element / col;
        cout << element;
    }
    return 0;
}
