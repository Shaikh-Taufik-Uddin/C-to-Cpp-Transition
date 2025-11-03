#include<iostream>
using namespace std;
// outside the main function the maximum array size can be of 10^7
int main() // inside the main function the maximum array size can be of 10^6 
{
    int arr[5] = {1, 4, 4, 4, 5};
    int hash[5] = {0}; // hash array is created and initialized to 0
    for (int i = 0; i < 5;i++) // array traversal loop
    {
        // counts all occurences 
        int a = arr[i];
        hash[a] += 1; 
        // hash[arr[i]]+=1;
    }
    //query
    int q;
    cout << "find occurence of : ";
    cin >> q;
    cout << q << " appeared " << hash[q] << " times";
    return 0;
}