// in the same way constructor can be overloaded too
#include <iostream>
using namespace std;

class Box
{
public:
    int length, width, height;

    // Default constructor
    Box()
    {
    }

    // Parameterized constructor (1 argument)
    Box(int l)
    {
        length = width = height = l;
    }

    // Parameterized constructor (3 arguments)
    Box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }

    void show()
    {
        cout << "Box: " << length << " x " << width << " x " << height << endl;
    }
};

int main()
{
    Box b1; // calls default constructor
    b1.height = 6;
    b1.length = 5;
    b1.width = 4;
    Box b2(5);       // calls constructor with 1 argument
    Box b3(2, 4, 6); // calls constructor with 3 arguments

    b1.show();
    b2.show();
    b3.show();

    return 0;
}
