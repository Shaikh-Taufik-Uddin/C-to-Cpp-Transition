#include <bits/stdc++.h>
using namespace std;
int main()
// auto operator can automatically assign datatypes wrt the type of input given
{
    auto a = 5;
    auto b = 'c';
    auto c = "hello world";
    auto d = 5.789;
    auto e = {1, 2, 3};
    auto v = vector<int>{1, 2, 3};
    // printing
    for (auto i = v.begin(); i != v.end(); i++) // i is automatically set to an iterator no need to manually write long phrases
    {
        cout << *i << endl;
    }
    // another method 
    for (auto it:v) 
    {
        cout << it << endl;
    }
    return 0;
}
/*v — is your vector (for example: vector<int> v = {1, 2, 3, 4, 5};).

auto it : v

auto automatically deduces the data type of the elements in the vector.

Since v is vector<int>, auto it becomes int it.

So in each iteration, it holds a copy of one element from v.*/