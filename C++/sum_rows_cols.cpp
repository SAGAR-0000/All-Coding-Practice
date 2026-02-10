#include <iostream>
using namespace std;
int main() {
    int m, n, i, j, a[10][10], sum;
    cout << "Enter rows and cols: ";
    cin >> m >> n;
    cout << "Enter matrix:\n";
    for(i=0; i<m; i++) 
        for(j=0; j<n; j++) cin >> a[i][j];
        
    for(i=0; i<m; i++) {
        sum = 0;
        for(j=0; j<n; j++) sum += a[i][j];
        cout << "Sum of row " << i+1 << " = " << sum << endl;
    }
    for(j=0; j<n; j++) {
        sum = 0;
        for(i=0; i<m; i++) sum += a[i][j];
        cout << "Sum of col " << j+1 << " = " << sum << endl;
    }
    return 0;
}