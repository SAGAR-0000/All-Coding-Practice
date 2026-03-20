#include <stdio.h>
int main() {
    int arr[100], i, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Negative elements: ");
    for(i = 0; i < n; i++) {
        if(arr[i] < 0)
            printf("%d ", arr[i]);
    }
    return 0;
}