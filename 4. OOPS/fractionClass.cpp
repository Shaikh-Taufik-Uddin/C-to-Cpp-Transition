#include <bits/stdc++.h>
using namespace std;
class Fraction
{
public:
    int num;
    int den;
    Fraction(int n, int d)
    {
        num = n;
        den = d;
    }
    void show()
    {
        cout << num << "/" << den;
    }
    // Fraction add(Fraction f)
    // {
    //     int nnum = num * f.den + den * f.num;
    //     int nden = den * f.den;
    //     Fraction ans(nnum, nden);
    //     return ans;
    // }
    Fraction operator+(Fraction f)
    {
        int nnum = num * f.den + den * f.num;
        int nden = den * f.den;
        Fraction ans(nnum, nden);
        return ans;
    }
};
int main()
{
    Fraction f1(1, 2);
    Fraction f2(2, 3);
    f1.show();
    f2.show();
    // Fraction f3 = f1.add(f2);
    Fraction f3 = f1 + f2;
    f3.show();
    return 0;
}
