#include <string>
#include <iostream>
#include <stdexcept>
#include <fstream>
using namespace std;
​
string FindID(string name, ifstream &infoFS) {
    string s;
    /* Type your code here. */
    while(infoFS>>s){
        if (s == name){
            infoFS>>s;
            return s;
        }
    }
    s = "Student ID not found for "+name;
    throw runtime_error(s);
}
​
string FindName(string ID, ifstream &infoFS) {
    string s, t;
    /* Type your code here. */
    while(infoFS>>s>>t){
        if (t == ID){
            return s;
        }
    }
    s = "Student name not found for "+ID;
    throw runtime_error(s);
}
​
int main() {
    int userChoice;
    string studentName;
    string studentID;

    string studentInfoFileName;
    ifstream studentInfoFS;

    // Read the text file name from user
    cin >> studentInfoFileName;

    // Open the text file
    studentInfoFS.open(studentInfoFileName);

    // Read search option from user. 0: FindID(), 1: FindName()
    cin >> userChoice;
    ​
    // FIXME: FindID() and FindName() may throw an Exception.
    //        Insert a try/catch statement to catch the exception and output the exception message.
    try{
        if (userChoice == 0) {
            cin >> studentName;
            studentID = FindID(studentName, studentInfoFS);
            cout << studentID << endl;
        }
        else {
            cin >> studentID;
            studentName = FindName(studentID, studentInfoFS);
            cout << studentName << endl;
        }
    }
    catch(runtime_error &e){
        cout<<e.what()<<"\n";
    }
    studentInfoFS.close();
    return 0;
}