#include <iostream>
using namespace std;
void printNatural(int n, int current) {
    if (current > n) return;
    cout << current << " ";
    printNatural(n, current + 1);
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Natural numbers from 1 to " << n << ": ";
    printNatural(n, 1);
    return 0;
}