#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<int> list(12) ;

    for (int i = 0; i < 12; ++i) {
        cin>>list.at(i);
        
    }
    for (int i = 0; i < 12; ++i) {
        cout<<list.at(i);
        if (i%4==3)
            cout<<endl;
        else
            cout<<" ";
    }
}