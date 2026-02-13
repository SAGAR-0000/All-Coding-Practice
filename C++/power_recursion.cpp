#include <iostream>
using namespace std;
double power(double base, int exp) {
    if (exp == 0) return 1;
    if (exp > 0) return base * power(base, exp - 1);
    return 1.0 / power(base, -exp);
}
int main() {
    double base;
    int exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << base << "^" << exp << " = " << power(base, exp);
    return 0;
}