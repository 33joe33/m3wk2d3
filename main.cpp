#include <iostream>
using namespace std;
#include <vector>
int main() {
int length;
cin >> length;
vector<int> numbers;
int temp;
    for (int i = 0; i < length; ++i) {
        cin>>temp;
        numbers.push_back(temp);
    }
    for (int i = 0; i < length-1; ++i) {
        cout<<numbers[i]<<", ";
    }
cout<< numbers[length-1]<<"."<<endl;
return 0;}