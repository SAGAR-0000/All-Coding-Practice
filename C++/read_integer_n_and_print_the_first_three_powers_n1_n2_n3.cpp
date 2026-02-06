#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int base, exp;
    long double result = 1.0;
    cout << "Enter a base number: ";
    cin >> base;
    cout << "Enter an exponent: ";
    cin >> exp;
    while (exp != 0) {
        result *= base;
        --exp;
    }
    cout << "Answer = " << result;
    return 0;
}