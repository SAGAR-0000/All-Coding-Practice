#include <stdio.h>
int main() {
    int arr[100], even[100], odd[100], i, n, evenCount = 0, oddCount = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even[evenCount++] = arr[i];
        else
            odd[oddCount++] = arr[i];
    }
    printf("Even elements: ");
    for(i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\nOdd elements: ");
    for(i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    return 0;
}