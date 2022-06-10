#include <iostream>
using namespace std;

int main() {
    string userCaption;

    getline(cin, userCaption);

    if (userCaption.back() != '!' and userCaption.back() != '?') {
        if (userCaption.back() == ',' || userCaption.back()=='.') {
            userCaption.back() = '.';
        } else
            userCaption.insert(userCaption.end(), '.');
    }    if (userCaption.find("...")== -1 and userCaption.find("..")!=-1)
        userCaption.replace(userCaption.find(".."),2,".");
    cout<<userCaption<<endl;
    return 0;
}