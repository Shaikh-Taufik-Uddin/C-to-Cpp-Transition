#include <bits/stdc++.h>
using namespace std;
class vehicle // parent class
{
public:
    int seat;
    int speed;

protected: // inherited classes can use protected attributes outside the class
    int serial;

private:
    bool engine;
};
class ev // another parent class
{
public:
    int battery;
};
class bike : public vehicle // child class bike accessing the parent class vehicle's public elements
{
public:
    int gear;
    int stand;
};
class ambulance : public vehicle // single inheritence
{
public:
    int emergency;
    int bed;
};
class scooty : public bike // multilevel inheritence
{
public:
    int bootspace;
};
class ebike : public vehicle, public ev // multiple inheritence
{
public:
    int mileage;
};
int main()
{
    // we can assign every attribute now
    // we can also create constructor for everyone and then do it or use default constructor 
    scooty s;
    s.gear = 0;      // from bike
    s.bootspace = 1; // from scooty
    s.seat = 1;      // from seat
    ebike e;
    e.seat = 1;    // from vehicle
    e.battery = 1; // from ev
    e.mileage = 1; // from ebike
    return 0;
}