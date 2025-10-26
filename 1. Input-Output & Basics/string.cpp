// #include <bits/stdc++.h> // easiest to use beacause it includes all the libraries 
#include<iostream>
using namespace std;
int main()
{
    string s;
    // cin >> s;
    // cout << s;
    // upper method only picks string before a space
    // to print the whole string even a
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "your enterd string was: " << s;
    // for charecetrs
    char ch;
    cout << "\nEnter a charecter: ";
    cin >> ch;
    cout << ch << " was your enterd charecter";
    return 0;
}