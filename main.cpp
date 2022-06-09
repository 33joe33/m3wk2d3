#include <iostream>
using namespace std;
​
int main() {
    cin.exceptions(ios::failbit); // Allow cin to throw exceptions
    int val1, val2, val3, max, count = 0;

    val1 = 0;
    val2 = 0;
    val3 = 0;
    /* Type your code here. */
    try{
        cin>>val1;
        max = val1;
        count++;
        cin>>val2;
        max = (max < val2) ? val2 : max;
        count++;
        cin>>val3;
        max = (max < val3) ? val3 : max;
        count++;
        cout<<max<<"\n";
    }
    catch(ios_base::failure &e){
        cout<<count<<" input(s) read:\n";
        if (count > 0) cout<<"Max is "<<max<<"\n";
        else cout<<"No max\n";
    }
    return 0;
}