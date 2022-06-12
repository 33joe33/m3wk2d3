#include <iostream>
using namespace std;

int main() {
string password;
cin>>password;
bool let=false;

bool num =false;
bool special =false;

for (auto &&letter :password){
if (isdigit(letter))
      num =true;

if (letter =='!' or letter=='#' or letter=='%')
    special =true;
else
    if (!isdigit(letter))
        let= true;

}
    if (password.length()<8)
        cout<<"Too short"<<endl;
    else if( num and  special and  let)
        cout<<"OK"<<endl;
    if (!let)
        cout<<"Missing letter"<<endl;

    if (!num)
        cout<<"Missing number"<<endl;
    if (!special)
        cout<<"Missing special"<<endl;




}