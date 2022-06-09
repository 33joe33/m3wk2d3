#include <iostream>
#include <vector>
#include <stdexcept>      // For std::out_of_range
using namespace std;
​
int main() {
    vector<string> names = { "Ryley", "Edan", "Reagan", "Henry", "Caius", "Jane", "Guto", "Sonya", "Tyrese", "Johnny" };
    int index;
    string name;

    cin >> index;

    /* Type your code here. */
    try{cout<<names.at(index)<<"\n";}
    catch(exception &e){//why is pass by reference needed here?
        cout<<"Exception! "<<e.what()<<"\n";
        cout<<"The closest name is: ";
        index = (index < 0) ? 0 : 9;
        cout<<names.at(index)<<"\n";
    }
    return 0;
}