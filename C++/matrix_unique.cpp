#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[10][10], r, c, i, j, k=0;
    int flat[100];
    cout << "Enter rows and cols: ";
    cin >> r >> c;
    cout << "Enter elements:\n";
    for(i=0; i<r; i++)
        for(j=0; j<c; j++) {
            cin >> a[i][j];
            flat[k++] = a[i][j];
        }
    sort(flat, flat+k);
    cout << "Unique elements: ";
    // Logic: Print if not equal to prev and not equal to next (careful with bounds)
    // or just count frequency.
    for(i=0; i<k; i++) {
        bool unique = true;
        if(i > 0 && flat[i] == flat[i-1]) unique = false;
        if(i < k-1 && flat[i] == flat[i+1]) unique = false;
        if(unique) cout << flat[i] << " ";
    }
    return 0;
}