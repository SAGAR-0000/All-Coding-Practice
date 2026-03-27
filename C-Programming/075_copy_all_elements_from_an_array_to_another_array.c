#include <stdio.h>
int main() {
    int arr1[100], arr2[100], i, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }
    printf("Elements copied successfully\n");
    printf("First array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}