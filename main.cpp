#include <iostream>
#include <stdexcept>
using namespace std;
​
void divide(int x, int y){
    if (y==0) throw "Divide by zero!";
    cout<<(x/y)<<"\n";
}
​
int main() {
    int userNum;
    int divNum;
    int result=0;
    cin.exceptions(ios::failbit);       // Allow cin to throw exceptions
    ​
    /* Type your code here. */
    try{
        cin>>userNum>>divNum;
        divide(userNum, divNum);
    }
    catch(ios_base::failure &e){
        cout<<"Input Exception: "<<e.what()<<"\n";
    }
    catch(...){
        cout<<"Runtime Exception: "<<"Divide by zero!"<<"\n";
    }

    return 0;
}