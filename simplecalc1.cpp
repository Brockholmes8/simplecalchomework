#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double r, a;
    const double pi = 3.1415926535;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    a = pi * pow(r, 2);

    // Displaying area with 10 decimal places
    cout << fixed << setprecision(10);
    cout << "Area of the circle: " << a << endl;

    return 0;
}

// Test Cases:
// Radius   Area
// 5        78.5398163375
// 10.5     346.3605900484
// 12       452.3893421040
// 7        153.9380400215
// 6        113.0973355260