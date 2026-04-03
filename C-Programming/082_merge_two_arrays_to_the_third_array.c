#include <stdio.h>
int main() {
    int arr1[50], arr2[50], arr3[100], i, n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements in first array: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements in second array: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        arr3[n1 + i] = arr2[i];
    }
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}