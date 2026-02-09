#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[50], n, i;
    int first, second;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i=0; i<n; i++) cin >> arr[i];
    if(n < 2) {
        cout << "Invalid Input";
        return 0;
    }
    first = second = INT_MIN;
    for(i=0; i<n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if(second == INT_MIN)
        cout << "There is no second largest element";
    else
        cout << "Second Largest: " << second;
    return 0;
}