// creating vector from scratch
#include <bits/stdc++.h>
using namespace std;
class Vector
{
public:
    int size;
    int capacity;
    int *arr;
    Vector() // A constructor runs only once, and only when the object is created not every time you add or remove something so this code below wont set those values for each call
    // only when a new vector is created
    {
        size = 0;
        capacity = 1;
        arr = new int[1]; // array that is pointed by a pointer
    }
    void add(int ele)
    {
        if (size == capacity)
        {
            capacity *= 2;
            int *arr2 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }
            // delete[] arr; // to stop potential memory leak issue
            arr = arr2; // old array is dismissed for the new array
        }
        arr[size++] = ele; // size ++ is post increment so 1st it stores element in that index then +1's it
    }
    int get(int idx) // to get the stored value in an index
    {
        return arr[idx];
    }
    void remove()
    {
        size--;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Vector v;
    v.add(10);
    v.add(30);
    v.add(20);
    v.print();
    cout << v.get(2);
    v.remove();
    v.print();
    return 0;
}
