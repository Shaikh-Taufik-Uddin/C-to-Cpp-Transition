#include <bits/stdc++.h>
using namespace std;
class Cat
{
public:
    string name;
    int age;
    virtual void sound()
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
public:
    void sound()
    {
        cout << "Grrrrr" << endl;
    }
};
int main()
{
    Cat *c = new Cat();
    Cat *cc = new Cutecat;
    Angrycat aac;
    Cat *ac = &aac;
    vector<Cat *> ct = {c, cc, ac};
    for(auto it : ct)
    {
        it->sound(); // just for printing not storing the sounds
    }
    return 0;
}
