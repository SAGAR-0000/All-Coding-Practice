#include <iostream>
using namespace std;
int main() {
    int arr[100], freq[100];
    int n, i, j, count;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i=0; i<n; i++) {
        cin >> arr[i];
        freq[i] = -1;
    }
    for(i=0; i<n; i++) {
        count = 1;
        for(j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }
    cout << "Frequency of all elements:\n";
    for(i=0; i<n; i++) {
        if(freq[i] != 0) {
            cout << arr[i] << " occurs " << freq[i] << " times\n";
        }
    }
    return 0;
}