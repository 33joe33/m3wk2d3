#include <iostream>
using namespace std;
void recursion(int n){

        if (n<10) {
            cout << n<<endl;
            return;
        }
        cout<<n%10<<endl;
        recursion(n/10);
    }
int main() {

    int number;
    cin>>number;
    recursion(number);
    return 0;
}