#include <iostream>
using namespace std;
int main() {
    int a[10][10], m, n, i, j, count=0;
    cout << "Enter rows and cols: ";
    cin >> m >> n;
    cout << "Enter elements:\n";
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin >> a[i][j];
            if(a[i][j] == 0) count++;
        }
    }
    if(count > (m*n)/2)
        cout << "It is a sparse matrix";
    else
        cout << "It is not a sparse matrix";
    return 0;
}