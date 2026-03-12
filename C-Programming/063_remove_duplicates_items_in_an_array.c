#include <stdio.h>
int main() {
    int arr[100], temp[100], i, j, k = 0, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < k; j++) {
            if(arr[i] == temp[j])
                break;
        }
        if(j == k) {
            temp[k] = arr[i];
            k++;
        }
    }
    printf("Array after removing duplicates: ");
    for(i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }
    return 0;
}