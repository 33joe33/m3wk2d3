#include <iostream>
using namespace std;
bool between(signed int start, signed int stop, int deg){
    bool test =start<deg and stop>deg;

    return (test);
}

int main() {
int deg;

string dir="some";
cin>>deg;

deg=deg*100;
    if (between(3600-225,225,deg))
        dir="north";

    if (between(450-225,450+225,deg))
        dir="northeast";

    if (between(450+225,900+225,deg))
        dir="east";
    if (between(900+225,1800-225,deg))
        dir="southeast";
    if (between(1800-225,1800+225,deg))
        dir="south";

    if (between(1800+225,2700-225,deg))
        dir="southwest";
    if (between(2700-225,2700+225,deg))
        dir="west";
    if (between(2700+225,3600-225,deg))
        dir="northwest";
    cout<<deg/10<<" degrees ("<<dir<<")"<<endl;
    return 0;
}