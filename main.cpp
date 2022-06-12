#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int w;
    double h;
    int d;

    cin >> d;

    for (w = 1.0; w < d; w += 1.0) {

        h = sqrt( (d * d) - (w * w) );

        if (w > h) {
            cout << w << " " << h << endl;
        }
    }

    return 0;
}