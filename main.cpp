#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main() {
    string str, sub;
    getline(cin,str);
    bool toggle =true;
    auto pos=str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",0);
    int counter=0;

    while(pos!=string::npos) {

        if (toggle)
            {  pos =str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",pos);
                if (pos!=string::npos)
                    counter+=1;
               toggle= false;
            }
        else
          {
            pos = str.find_first_of(' ',pos);
            toggle=true;
          }

    }
    cout<<counter<<endl;
return 0;
    }