#include <iostream>
using namespace std;
int main() {
    int arr1[50], arr2[50], merge[100];
    int n1, n2, i, k;
    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter elements: ";
    for(i=0; i<n1; i++) {
        cin >> arr1[i];
        merge[i] = arr1[i];
    }
    k = n1;
    cout << "Enter size of second array: ";
    cin >> n2;
    cout << "Enter elements: ";
    for(i=0; i<n2; i++) {
        cin >> arr2[i];
        merge[k] = arr2[i];
        k++;
    }
    cout << "Merged array: ";
    for(i=0; i<k; i++) cout << merge[i] << " ";
    return 0;
}