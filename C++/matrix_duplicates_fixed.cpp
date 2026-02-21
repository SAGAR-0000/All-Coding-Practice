#include <iostream> 
#include <algorithm>
using namespace std;
int main() {
    int a[10][10], r, c, i, j, k=0;
    int flat[100]; // Flatten matrix
    cout << "Enter rows and cols: ";
    cin >> r >> c;
    cout << "Enter elements:\n";
    for(i=0; i<r; i++)
        for(j=0; j<c; j++) {
            cin >> a[i][j];
            flat[k++] = a[i][j];
        }
    sort(flat, flat+k);
    cout << "Duplicates: ";
    for(i=0; i<k-1; i++) {
        if(flat[i] == flat[i+1]) {
            cout << flat[i] << " ";
            while(i<k-1 && flat[i] == flat[i+1]) i++; // Skip same
        }
    }
    return 0;
}