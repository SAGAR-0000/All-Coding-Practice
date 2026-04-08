#include <stdio.h>
int main() {
    int arr[100], i, n, search, found = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            found = i;
            break;
        }
    }
    if(found != -1)
        printf("Element found at position %d", found + 1);
    else
        printf("Element not found");
    return 0;
}