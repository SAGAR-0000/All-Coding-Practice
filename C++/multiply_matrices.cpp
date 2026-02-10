#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], mult[10][10];
    cout << "Enter rows and cols for 1st matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and cols for 2nd matrix: ";
    cin >> r2 >> c2;
    if(c1 != r2) {
        cout << "Multiplication not possible.";
        return 0;
    }
    cout << "Enter 1st matrix:\n";
    for(i=0; i<r1; i++) 
        for(j=0; j<c1; j++) cin >> a[i][j];
        
    cout << "Enter 2nd matrix:\n";
    for(i=0; i<r2; i++) 
        for(j=0; j<c2; j++) cin >> b[i][j];
        
    for(i=0; i<r1; i++) {
        for(j=0; j<c2; j++) {
            mult[i][j] = 0;
            for(k=0; k<c1; k++) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "Multiplication Result:\n";
    for(i=0; i<r1; i++) {
        for(j=0; j<c2; j++) cout << mult[i][j] << " ";
        cout << endl;
    }
    return 0;
}