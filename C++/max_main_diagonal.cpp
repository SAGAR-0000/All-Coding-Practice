#include <iostream>
using namespace std;
int main() {
    int a[10][10], size, i, j, max;
    cout << "Enter size of square matrix: ";
    cin >> size;
    cout << "Enter elements:\n";
    for(i=0; i<size; i++)
        for(j=0; j<size; j++) cin >> a[i][j];
        
    max = a[0][0];
    for(i=1; i<size; i++) {
        if(a[i][i] > max) max = a[i][i];
    }
    cout << "Maximum in main diagonal: " << max;
    return 0;
}