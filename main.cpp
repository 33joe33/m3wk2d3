#include <iostream>
#include <functional>
using namespace std;
using namespace placeholders;
​
/* TODO: Write recursive DigitCount() function here. */
int DigitCount2(int num, int count){
    if (num<=9) return count+1;
    else return DigitCount2(num/10, count + 1);
}
​
auto DigitCount = bind(DigitCount2, _1, 0);
​
int main() {
    int num;
    int digits;
    ​
    cin >> num;
    digits = DigitCount(num);
    cout << digits << endl;
    return 0;
}