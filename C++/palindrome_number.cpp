#include <iostream>
using namespace std;
int main() {
    int n, reversedN = 0, remainder, originalN;
    cout << "Enter an integer: ";
    cin >> n;
    originalN = n;
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
    if (originalN == reversedN)
        cout << originalN << " is a palindrome.";
    else
        cout << originalN << " is not a palindrome.";
    return 0;
}