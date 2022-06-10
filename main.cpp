#include <iostream>
using namespace std;

int main() {
    int n;
    int i;

    cout << "Enter an integer:" << endl;
    cin >> n;

    cout << "Sequence: ";

    if (n<0)
        cout<<0<<" ";
    if(n%2 !=0)
        n-=1;
    while (n>-1)
        {
        cout<<n<<" ";

        n-=2;
        }


    cout<<endl;
    return 0;
}