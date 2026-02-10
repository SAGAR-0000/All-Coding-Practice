#include <iostream>
using namespace std;
int main() {
    int arr[100], n, i, j, temp;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    // Bubble sort
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted array (Ascending): ";
    for(i=0; i<n; i++) cout << arr[i] << " ";
    return 0;
}