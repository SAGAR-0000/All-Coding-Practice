#include <stdio.h>
int main() {
    int arr[100], even[100], odd[100], i, j, k, l, n, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Separate even and odd elements
    k = 0;
    l = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even[k++] = arr[i];
        else
            odd[l++] = arr[i];
    }
    // Sort even elements
    for(i = 0; i < k - 1; i++) {
        for(j = 0; j < k - i - 1; j++) {
            if(even[j] > even[j + 1]) {
                temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }
    // Sort odd elements
    for(i = 0; i < l - 1; i++) {
        for(j = 0; j < l - i - 1; j++) {
            if(odd[j] > odd[j + 1]) {
                temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }
    printf("Sorted even elements: ");
    for(i = 0; i < k; i++) {
        printf("%d ", even[i]);
    }
    printf("\nSorted odd elements: ");
    for(i = 0; i < l; i++) {
        printf("%d ", odd[i]);
    }
    return 0;
}