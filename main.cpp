#include "ListItem.h"
#include <string>
#include <list>
#include <iostream>
​
using namespace std;
​
int main () {
    // TODO: Declare a list called shoppingList of type ListItem
    string item;
    string itemList="";
    ​
    // TODO: Read inputs (items) and add them to the shoppingList list
    //       Read inputs until a -1 is input
    while(getline(cin,item)){
        if (item == "-1") itemList.pop_back();
        else itemList += item + "\n";
    }
    ListItem shoppingList(itemList);
    // TODO: Print the shoppingList list using the PrintNodeData() function
    shoppingList.PrintNodeData();
    return 0;
}