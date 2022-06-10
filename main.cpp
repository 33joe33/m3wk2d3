#include <iostream>
using namespace std;

int main() {
    int number;
    int valid=0;
    int invalid=0;
    double average=0;
    do{cin>>number;
        if(number!=0)
        {
            if (number < 2 or number > 12)
                invalid += 1;
            else
                {average = average * valid + number;
            valid += 1;
            average = (average) / valid;}
        }
    }while (number!=0);
    cout<<"Average: "<<average<<endl;
    cout<<"Valid: "<<valid<<endl;
    cout<<"Invalid: "<<invalid<<endl;
    return 0;
}