#include <stdio.h>
int main() {
    int arr[100], i, j, n, isUnique;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Unique elements: ");
    for(i = 0; i < n; i++) {
        isUnique = 1;
        for(j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique)
            printf("%d ", arr[i]);
    }
    return 0;
}