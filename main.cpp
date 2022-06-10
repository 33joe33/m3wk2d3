#include <iostream>
using namespace std;

int main() {
    int passengerAge;
    int carryOns;
    int checkedBags;
    int airFare;
    int base =300;

    cin >> passengerAge;
    cin >> carryOns;
    cin >> checkedBags;

    if (passengerAge >=60)
        base =290;
    if (passengerAge <=2)
        base =0;
    base+=(carryOns)*10;
    if (checkedBags ==2)
        base+=25;
    if(checkedBags>2)
        base+=(checkedBags-2)*50+25;

    airFare =base;
    cout << airFare << endl;

    return 0;
}