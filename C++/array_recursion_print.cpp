#include <iostream>
using namespace std;
void printArray(int arr[], int start, int len) {
    if(start >= len) return;
    cout << arr[start] << " ";
    printArray(arr, start + 1, len);
}
int main() {
    int arr[100], n, i;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    cout << "Array elements: ";
    printArray(arr, 0, n);
    return 0;
}