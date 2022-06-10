#include <iostream>
#include <iomanip>

using namespace std;

int main() {
int hours;
int minutes;
string am;
cin>>hours;
cin>>minutes;
cin>>am ;
if (hours== 12 )
    hours -=12;
if (am =="pm")
    hours+=12;
cout<<std::setw(2)<<std::setfill('0')<<hours<<":"<<std::setw(2)<<std::setfill('0')<< minutes<<endl;
    return 0;
}