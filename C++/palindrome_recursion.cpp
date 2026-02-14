#include <iostream>
#include <cmath>
using namespace std;
int reverse(int num, int rev) {
    if(num == 0) return rev;
    return reverse(num/10, rev*10 + num%10);
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if(n == reverse(n, 0)) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}