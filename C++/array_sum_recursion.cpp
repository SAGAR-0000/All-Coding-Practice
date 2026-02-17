#include <iostream>
using namespace std;
int sumArray(int arr[], int n) {
    if (n <= 0) return 0;
    return (sumArray(arr, n - 1) + arr[n - 1]);
}
int main() {
    int arr[100], n, i;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    cout << "Sum: " << sumArray(arr, n);
    return 0;
}