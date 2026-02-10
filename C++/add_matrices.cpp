#include <iostream>
using namespace std;
int main() {
    int r, c, i, j;
    int a[10][10], b[10][10], sum[10][10];
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    cout << "Enter elements of 1st matrix:\n";
    for(i=0; i<r; i++) 
        for(j=0; j<c; j++) cin >> a[i][j];
    
    cout << "Enter elements of 2nd matrix:\n";
    for(i=0; i<r; i++) 
        for(j=0; j<c; j++) cin >> b[i][j];
        
    for(i=0; i<r; i++) 
        for(j=0; j<c; j++) sum[i][j] = a[i][j] + b[i][j];
        
    cout << "Sum of two matrices: \n";
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}