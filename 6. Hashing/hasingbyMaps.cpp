#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 4, 4, 4, 5};
    map<int, int> mp; // using map we can solve the same problems using lesser space as maps store only the existing occurences not the absent ones
    // key of a map can be of any data type so we dont need to typecast for charecters like before here 
    // unorderd map has some exceptions
    for (int i = 0; i < 5; i++)
    {
        int a = arr[i];
        mp[a] += 1;
    }
    int q;
    cout << "find occurence of : ";
    cin >> q;
    cout << q << " appeared " << mp[q] << " times";
    return 0;
}
// use of unorderd map makes the time complexity to O(1) for best and average cases and O(n) for worst case 
// while map normally takes O(log n) for all the cases
// and maps solve the limitation of 10^6/10^7 limitation of size of array
// because maps store datas using division method or other methods (we cant tell what they use) they trim down the number using % and store it , in case of multiple occurence 
// or same % it creates a linked list and while fetching back it performs a binary search to retrive it 
// Collision is when due to implemetation of a particular method e.g if all numbers are ending with 8 so the map will have a huge linked list in the 8 key
// while other locations are empty . so searching will take a lot of time in this case
// this is the worst case
// folding and mid square method are also used (not req. for us to understand)
