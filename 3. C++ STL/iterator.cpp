#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec(4, 23); // vector defining
    vec.emplace_back(24);
    vector<int>::iterator ite = vec.begin(); // ite is the name of iterator and it is pointed to the beginning of the vector vec
    for (int i = 0; i < 5; i++)
    {
        cout << *ite << endl; // we use *ite to print the value that is stored in the location that ite is pointing at
        ite++;                // ite is moved to the next address
    }
    vector<int>::iterator zte = vec.end(); // an iterator zte that is pointing towards NOT the last element BUT just after the location of last element so we need zte-- to get to the last element
    // not used much
    vector<int>::reverse_iterator xte = vec.rend(); // a reverse iterator xte that is pointing towards NOT the last element BUT just before the location of first element
    // but the way reverse iterators works if we do xte++ this will do the thing xte-- would do in normal iterators , so its functionality is reverse than that
    vector<int>::reverse_iterator yte = vec.rbegin();
    // same as previous
    // example a vector exists [1,2,3,4,5]
    // rbegin() will be pointing towards 5 (unlike rend() /end() that would point 1 location before/advance)
    // when we do yte++ it will move in the seemingly yte-- direction as it is a reverse iterator

    cout << vec.back(); // vec.back() means the last element of a vector ;
    return 0;
}