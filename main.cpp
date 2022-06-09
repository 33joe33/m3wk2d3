#include<iostream>
#include<string>
using namespace std;
#ifndef STATEPAIR
#define STATEPAIR
​
template<typename T1, typename T2>
class StatePair {
private:
    T1 key;
    T2 value;
public:
// TODO: Define constructors
    StatePair(){}
    StatePair(T1 userKey, T2 userValue){
        key = userKey;
        value = userValue;
    }

// TODO: Define mutators, and accessors for StatePair
    void SetKey(T1 userKey){key = userKey;}
    void SetValue(T2 userValue){value = userValue;}
    T1 GetKey(){return key;}
    T2 GetValue(){return value;}
// TODO: Define PrintInfo() method
    void PrintInfo(){
        cout<<key<<": "<<value<<"\n";
    }
};
​
#endif