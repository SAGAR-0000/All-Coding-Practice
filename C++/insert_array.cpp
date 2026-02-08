#include <iostream>
using namespace std;
int main() {
    int arr[100] = {0};
    int i, x, pos, n = 10;
    // Initialize some data
    for (i = 0; i < 10; i++) arr[i] = i + 1;
    cout << "Initial array: ";
    for (i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    cout << "Enter element to insert: ";
    cin >> x;
    cout << "Enter position (1-10): ";
    cin >> pos;
    // Element at pos-1 goes to pos
    n++; // Increase size
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
    cout << "Array after insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}