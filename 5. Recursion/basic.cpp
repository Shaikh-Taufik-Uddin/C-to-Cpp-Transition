#include <iostream>
using namespace std;
int count = 0; // variable with global scope
void print()
{
    if (count == 6)
    {
        return;
    }
    cout << count;
    count++;
    print();
}
int main()
{
    print();
    return 0;
}