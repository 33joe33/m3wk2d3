#include <iostream>
using namespace std;
​
int Fibonacci(int n) {
    /* Type your code here. */
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;
    else return Fibonacci(n-1) + Fibonacci(n-2);
}
​
int main() {
    int startNum;

    cin >> startNum;
    cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

    return 0;
}