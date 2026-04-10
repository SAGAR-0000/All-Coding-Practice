#include <stdio.h>
int main() {
    int arr[100], i, n, rotation, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of rotations: ");
    scanf("%d", &rotation);
    for(i = 0; i < rotation; i++) {
        temp = arr[0];
        for(j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
    printf("Array after left rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}