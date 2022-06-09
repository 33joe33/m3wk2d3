#include <map>
#include <string>
#include <iostream>
#include <map>
#include <string>
#include <iostream>
​
using namespace std;
​
int main () {
    map<string, double> studentGrades;
    ​
    // Students' grades (pre-entered)
    studentGrades.emplace("Harry Rawlins", 84.3);
    studentGrades.emplace("Stephanie Kong", 91.0);
    studentGrades.emplace("Shailen Tennyson", 78.6);
    studentGrades.emplace("Quincy Wraight", 65.4);
    studentGrades.emplace("Janine Antinori", 98.2);
    ​
    // TODO: Read in new grade for a student, output initial
    //       grade, replace with new grade in map,
    //       output new grade
    string studentName;
    double studentGrade;
    getline(cin, studentName);
    cout<<studentName<<"'s "<<"original"<<" grade: "<<studentGrades.at(studentName)<<"\n";
    cin>>studentGrade;
    studentGrades[studentName] = studentGrade;
    cout<<studentName<<"'s "<<"new"<<" grade: "<<studentGrades.at(studentName)<<"\n";
    return 0;
}