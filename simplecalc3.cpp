#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    // Prompt the user to provide coefficients a, b, and c
    cout << "Enter the coefficients (a, b, c) of the quadratic equation separated by spaces: ";
    cin >> a >> b >> c;

    // Compute both the positive and negative versions of the quadratic formula
    double discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);

        // Display both x-intercepts
        cout << "Positive x-intercept: " << x1 << endl;
        cout << "Negative x-intercept: " << x2 << endl;
    }
    else {
        // Display a message for imaginary roots
        cout << "No real roots (imaginary roots exist)." << endl;
    }

    return 0;
}

//  Input                    Output
//  a       b       c       x1      x2
//  3       6       -9      1       -3
//  1       -2      -24     6       -4
//  1       -2      1       1       1
//  1       -3      2       2       1