#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, originalNum, remainder, result = 0, digits = 0;
    cout << "Enter an integer: ";
    cin >> n;
    originalNum = n;
    // Count digits
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    originalNum = n;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += round(pow(remainder, digits)); // use round to avoid float precision issues
        originalNum /= 10;
    }
    if (result == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";
    return 0;
}