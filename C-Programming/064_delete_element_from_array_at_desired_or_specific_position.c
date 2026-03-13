#include <stdio.h>
int main() {
    int arr[100], i, n, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Array after deletion: ");
    for(i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}