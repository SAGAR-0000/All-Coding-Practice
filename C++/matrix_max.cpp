#include <iostream>
using namespace std;
int main() {
    int a[10][10], r, c, i, j, max;
    cout << "Enter rows and cols: ";
    cin >> r >> c;
    cout << "Enter elements:\n";
    for(i=0; i<r; i++)
        for(j=0; j<c; j++) cin >> a[i][j];
        
    max = a[0][0];
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            if(a[i][j] > max) max = a[i][j];
        }
    }
    cout << "Maximum element: " << max;
    return 0;
}