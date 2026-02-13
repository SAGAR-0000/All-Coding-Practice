#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
bool isArmstrong(int n) {
    int original = n, sum = 0, digits = 0, rem;
    int temp = n;
    while(temp > 0) { digits++; temp /= 10; }
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        sum += round(pow(rem, digits));
        temp /= 10;
    }
    return sum == n;
}
bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0) sum += i;
    return sum == n;
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Prime: " << (isPrime(n) ? "Yes" : "No") << endl;
    cout << "Armstrong: " << (isArmstrong(n) ? "Yes" : "No") << endl;
    cout << "Perfect: " << (isPerfect(n) ? "Yes" : "No") << endl;
    return 0;
}