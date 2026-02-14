#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

enum MealType {VEG,NON_VEG,VEGAN};

struct Passenger {
    string name; // passenger name
    MealType mealPref; // meal preference
    bool isFreqFlyer; // frequent flyer?
    string freqFlyerNo; // frequent flyer number
};

int main() {
    Passenger p1;

    p1.name = "Allen";
    p1.mealPref = VEG;
    p1.isFreqFlyer = true;
    p1.freqFlyerNo = "FF123";

    Passenger* p = &p1; // p stores address of p1
    
    cout << p->name << endl; // Allen ,
    cout << (*p).freqFlyerNo << endl;
    return 0;
}