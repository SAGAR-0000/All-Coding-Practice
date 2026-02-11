#include <iostream>
using namespace std;
int main() {
    int a[2][2], det, i, j;
    cout << "Enter 2x2 matrix elements:\n";
    for(i=0; i<2; i++)
        for(j=0; j<2; j++) cin >> a[i][j];
        
    det = a[0][0]*a[1][1] - a[1][0]*a[0][1];
    cout << "Determinant = " << det;
    return 0;
}