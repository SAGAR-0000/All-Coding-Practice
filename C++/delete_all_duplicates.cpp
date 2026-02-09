#include <iostream>
using namespace std;
int main() {
    int arr[100], n, i, j, k;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; ) {
            if(arr[j] == arr[i]) {
                for(k=j; k<n-1; k++) {
                    arr[k] = arr[k+1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    cout << "Array after deleting duplicates: ";
    for(i=0; i<n; i++) cout << arr[i] << " ";
    return 0;
}