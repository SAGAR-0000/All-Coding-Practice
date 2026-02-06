#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    n1 = abs(n1); // Handle negative inputs
    n2 = abs(n2);
    while(n1 != n2) {
        if(n1 > n2) n1 -= n2;
        else n2 -= n1;
    }
    cout << "GCD = " << n1;
    return 0;
}
