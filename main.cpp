#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
​
/* Define your function here */
double StepsToMiles(int steps){
    double steps2 = steps;
    if (steps < 0) throw runtime_error("Exception: Negative step count entered.");
    else return steps2/2000;
}
int main() {
    int steps;
    /* Type your code here. */
    cin>>steps;
    cout << fixed << setprecision(2);
    try{cout<<StepsToMiles(steps)<<"\n";}
    catch(runtime_error &e){
        cout<<e.what()<<"\n";
    }

    return 0;
}