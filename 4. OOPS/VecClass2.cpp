#include <bits/stdc++.h>
using namespace std;

class Cat
{
public:
    string name;
    int age;
    virtual string sound()
    {
        return "Meow"; // return type needed as we want to store the sounds too in the vector
    }
};

class Cutecat : public Cat
{
public:
    string sound()
    {
        return "Miauu";
    }
};

class Angrycat : public Cat
{
public:
    string sound()
    {
        return "Grrrrr";
    }
};

int main()
{
    vector<Cat *> cats;
    cats.push_back(new Cat()); // different type of initialization
    cats.push_back(new Cutecat());
    cats.push_back(new Angrycat());
    vector<string> s;

    for (auto it : cats)
    {
        s.push_back(it->sound()); // storing
    }

    for (auto str : s)
    {
        cout << str << endl; // printing
    }

    return 0;
}
