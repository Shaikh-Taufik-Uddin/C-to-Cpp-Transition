#include <bits/stdc++.h>
using namespace std;
void worker(int &a) // just an & makes it pass by reference // else void worker(int a) is pass by value
{
    a = a + 10;
    cout << a;
}
int main()
{
    int a;
    cin >> a;
    worker(a);
    cout << a;
    return 0;
}

// the C way to do it was
/*
#include<stdio.h>
void worker(int* a)
{
    *a = *a + 10;
    printf("%d",*a);
}
int main()
{
    int a;
    scanf("%d",&a);
    worker(&a);
    printf("%d",a);
    return 0;
}*/