#include <iostream>
using namespace std;
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if(n < 0) cout << "Invalid input";
    else cout << "Factorial: " << factorial(n);
    return 0;
}