#include <stdio.h>
int main() {
    int arr[100], i, j, n, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Bubble sort in ascending order
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array in ascending order: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nArray in descending order: ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}