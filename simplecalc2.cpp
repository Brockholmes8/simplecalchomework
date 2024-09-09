#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    char slash;

    cout << "Enter the first fraction in the format a/b: ";
    cin >> a >> slash >> b;

    cout << "Enter the second fraction in the format c/d: ";
    cin >> c >> slash >> d;

    // Computing the sum of fractions
    int numerator = a * d + b * c;
    int denominator = b * d;

    cout << "Sum of fractions: " << numerator << "/" << denominator << endl;

    return 0;
}
// Test Cases:
// Fraction 1   Fraction 2    Sum
// 1/3          1/5           8/15      
// 2/4          1/4           12/16
// 1/5          2/3           13/15
// 3/5          1/6           22/30
// 2/7          2/6           26/42
