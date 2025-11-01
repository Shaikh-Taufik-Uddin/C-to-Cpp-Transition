// overriding is completely different than overloading
// achived by "virtual" keyword
#include <bits/stdc++.h>
using namespace std;
class Cat
{
public:
    string name;
    int age;
    virtual void sound()
    // when other types of cat class is put into this cat class , due to the virtual keyword this sound() checks if there are any other functions
    // in the derived classes ? if any execute that insted of this , and if not then only execute this .
    {
        cout << "Meow" << endl;
    }
};
class Cutecat : public Cat
{
public:
    void sound()
    {
        cout << "Miauu" << endl;
    }
};
class Angrycat : public Cat
{
    void sound()
    {
        cout << "Grrrrr" << endl;
    }
};
int main()
{
    Cat *c = new Cat();    // pointer to an object that is only created and has no name and is created during runtime (in heap)
    c->sound();            // sound function is called
    Cat *cc = new Cutecat; // we can also do this ! storing a different class in a pointer type of another class
    cc->sound();           // without the virtual keyword "meow" will be printed for cute cat too !
    // Cat *ac = new Angrycat();
    // ac->sound();
    Angrycat aac;   // normal declaration
    Cat *ac = &aac; // assigning to pointer
    ac->sound();
    return 0;
}
// vector<Cat *> v; // we can make data structures of classes too!