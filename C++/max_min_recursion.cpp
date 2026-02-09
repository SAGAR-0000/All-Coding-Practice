#include <iostream>
using namespace std;
int getMax(int arr[], int n) {
    if(n == 1) return arr[0];
    return max(arr[n-1], getMax(arr, n-1));
}
int getMin(int arr[], int n) {
    if(n == 1) return arr[0];
    return min(arr[n-1], getMin(arr, n-1));
}
int main() {
    int arr[100], n, i;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    cout << "Maximum: " << getMax(arr, n) << endl;
    cout << "Minimum: " << getMin(arr, n) << endl;
    return 0;
}