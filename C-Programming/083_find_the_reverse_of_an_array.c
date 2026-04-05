#include <stdio.h>
int main() {
    int arr[100], reverse[100], i, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        reverse[i] = arr[n - i - 1];
    }
    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nReversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", reverse[i]);
    }
    return 0;
}