// for a given n print the whole pascal triangle

// brute force (with triangle pattern)
/* (~ n3 complexity)
#include <iostream>
using namespace std;

int factorial(int a)
{
    int fact = 1;
    for (int i = a; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r)
{
    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    return ans;
}

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int a = n - i;

        for (int j = a; j > 0; j--)
        {
            cout << " ";
        }
        a--;
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }

        cout << "\n";
    }

    return 0;
}
*/
// optimal O(n2)

#include <iostream>
using namespace std;
void printrow(int r)
{
    int element = 1;
    cout << element << " ";
    for (int c = 1; c < r; c++) // loop for printing row
    {
        element = element * (r - c) / c;
        cout << element << " ";
    }
}
int main()
{
    int n;
    cout << " Enter number of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = n - i;
        for (int j = a; j >= 1; j--) // loop for printing upside down triangle
        {
            cout << " ";
        }
        printrow(i); // row printer
        cout << endl;
    }
    return 0;
}