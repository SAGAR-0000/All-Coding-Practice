#include <stdio.h>
int findMax(int arr[], int n) {
    if(n == 1)
        return arr[0];
    return (arr[n-1] > findMax(arr, n-1)) ? arr[n-1] : findMax(arr, n-1);
}
int findMin(int arr[], int n) {
    if(n == 1)
        return arr[0];
    return (arr[n-1] < findMin(arr, n-1)) ? arr[n-1] : findMin(arr, n-1);
}
int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum element: %d\n", findMax(arr, n));
    printf("Minimum element: %d\n", findMin(arr, n));
    return 0;
}