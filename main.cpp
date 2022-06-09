#include <iostream>
using namespace std;
string spaces = "         ";
string stars = "*";
/* TODO: Write recursive DrawTriangle() function here. */
void DrawTriangle(int baseLength){
    if (baseLength==-1) return;
    cout<<spaces<<stars<<"\n";
    spaces.pop_back();
    stars.push_back('*');
    stars.push_back('*');
    DrawTriangle(baseLength - 2);
}
​
int main() {
    int baseLength;

    cin >> baseLength;
    DrawTriangle(baseLength);
    return 0;
}