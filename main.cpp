#include <iostream>
#include <functional>
using namespace std;
​
// TODO: Write recursive PrintNumPattern() function
​
void PrintNumPattern2(int num1, int num2, int num3){
    if (num1 == num3) return;
    cout<<num1<<" ";
    if (num1 < 0) PrintNumPattern2(num1 + num2, -num2, num3);
    else PrintNumPattern2(num1 - num2, num2, num3);
}
​
void PrintNumPattern(int num1, int num2){
    int num3 = num1 + num2;
    PrintNumPattern2(num1, num2, num3);
}
​
int main() {
    int num1;
    int num2;
    ​
    cin >> num1;
    cin >> num2;
    PrintNumPattern(num1, num2);

    return 0;
}