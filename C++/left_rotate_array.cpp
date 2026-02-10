#include <iostream>
using namespace std;
int main() {
    int arr[100], n, i, j, r, first;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    cout << "Enter rotations: ";
    cin >> r;
    for(i=0; i<r; i++) {
        first = arr[0];
        for(j=0; j<n-1; j++) {
            arr[j] = arr[j+1];
        }
        arr[n-1] = first;
    }
    cout << "Rotated array: ";
    for(i=0; i<n; i++) cout << arr[i] << " ";
    return 0;
}