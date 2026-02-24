#include <iostream>
using namespace std;
int main() {
    int a[10][10], size, i, j, sum = 0;
    cout << "Enter size of square matrix: ";
    cin >> size;
    cout << "Enter elements:\n";
    for(i=0; i<size; i++)
        for(j=0; j<size; j++) cin >> a[i][j];
        
    for(i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            // Main diagonal: i==j. Anti-diagonal: i+j == size-1
            if(i != j && (i + j != size - 1)) {
                sum += a[i][j];
            }
        }
    }
    cout << "Sum except diagonals: " << sum;
    return 0;
}