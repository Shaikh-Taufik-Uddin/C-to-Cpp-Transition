// arrays are constant in size so we cant modify its length after assigning one
// this is where vectors come in
// vector is a container which is dynamic in nature we can change its size when needed

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;     // vector is the datatype , int is the datatype of the data stored in it and v is its name
    v.push_back(1);    // used to dynamically increase size of the container and store any value in it
    v.emplace_back(2); // same as push_back but faster
    // push / emplace can only take one value at a time
    v.emplace_back(4);
    // vector of pair datatype
    vector<pair<int, int>> vec;
    // using pushback
    vec.push_back({1, 2});  // we need to use {} to input value in pair
    vec.emplace_back(2, 3); // we dont need to use {} it automatically senses the pair datatype
    // initializing the size of vector while defining
    vector<int> vec2(5); // a vector with 0-4 index is declared (contains 0/garbage value)
    // still we can increase its size and store in it by emplace/pushback (always possible)
    vector<int> vek{1, 2, 3, 4, 5}; // a vector with elemens is declared
    vector<int> vec1(5, 100);       // a vector with 0-4 index is created each storing the value 100
    // copying one vector into another
    vector<int> vec3(vec1); // vec1 is copied in vec3

    // accessing the elements
    cout << vec3[2]; // prints the 2nd index of vec3 (just like array) vec3.at(2) will do the same but less used
    //pop_back() is used to delete the last element in a vector 
    return 0;

}
