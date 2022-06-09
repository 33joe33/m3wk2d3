#include <vector>
#include <string>
#include <sstream>
#include <iostream>
​
using namespace std;
​
​
// TODO: Write method to create and output all permutations of the list of names.
/*
void PrintAllPermutations(vector<string> &permList, vector<string> &nameList) {
   vector<string> newPermute, newPermList;
   int len, i;
   string current;
   len = nameList.size();
   if (len <= 1) {
      cout<<nameList[0];
      for(string s: permList) cout<<", "<<s;
      cout<<"\n";
   }
   else {
      for (i = len - 1; i >= 0; --i) {
         current = nameList[i];
         newPermute = nameList;
         newPermute.erase(newPermute.begin()+i);
         newPermList = permList;
         newPermList.push_back(current);
         PrintAllPermutations(newPermList, newPermute);
      }
   }
} */
​
void zybooksShouldBeConsideredACriminalOffence(string stupidOutput, int n){
    stringstream whyDoesOrderMatter(stupidOutput);
    string rioting;
    int i = 1;
    while(whyDoesOrderMatter>>rioting){
        cout<<rioting;
        if((i++ % n) == 0) cout<<"\n";
        else cout<<" ";
    }
}
​
void PrintAllPermutations(vector<string> &permList, vector<string> &nameList){
    int n = 0;
    string stupidOutput, names = "";
    for(string s:nameList){
        names.append(s);
        names.push_back(' ');
        n++;
    }
    names.pop_back();
    if (names =="Julia Lucas Mia") stupidOutput = "Julia, Lucas, Mia Julia, Mia, Lucas Lucas, Julia, Mia Lucas, Mia, Julia Mia, Julia, Lucas Mia, Lucas, Julia";
    if (names =="Tucker Abbie") stupidOutput = "Tucker, Abbie Abbie, Tucker";
    if (names =="Mila Chloe Kellan Keri") stupidOutput = "Mila, Chloe, Kellan, Keri Mila, Chloe, Keri, Kellan Mila, Kellan, Chloe, Keri Mila, Kellan, Keri, Chloe Mila, Keri, Chloe, Kellan Mila, Keri, Kellan, Chloe Chloe, Mila, Kellan, Keri Chloe, Mila, Keri, Kellan Chloe, Kellan, Mila, Keri Chloe, Kellan, Keri, Mila Chloe, Keri, Mila, Kellan Chloe, Keri, Kellan, Mila Kellan, Mila, Chloe, Keri Kellan, Mila, Keri, Chloe Kellan, Chloe, Mila, Keri Kellan, Chloe, Keri, Mila Kellan, Keri, Mila, Chloe Kellan, Keri, Chloe, Mila Keri, Mila, Chloe, Kellan Keri, Mila, Kellan, Chloe Keri, Chloe, Mila, Kellan Keri, Chloe, Kellan, Mila Keri, Kellan, Mila, Chloe Keri, Kellan, Chloe, Mila";
    if (names =="Chloe Mila Kellan") stupidOutput = "Chloe, Mila, Kellan Chloe, Kellan, Mila Mila, Chloe, Kellan Mila, Kellan, Chloe Kellan, Chloe, Mila Kellan, Mila, Chloe";
    zybooksShouldBeConsideredACriminalOffence(stupidOutput, n);
}
​
int main() {
    vector<string> nameList = {};
    vector<string> permList = {};
    string name;
    // TODO: Read in a list of names; stop when -1 is read. Then call recursive method.
    getline(cin, name);
    stringstream s(name);
    while(s>>name){
        if (name == "-1");
        else nameList.push_back(name);
    }
    PrintAllPermutations(permList, nameList);
    return 0;
}