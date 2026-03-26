#include <stdio.h>
int main() {
    int arr[100], i, n, count = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < 0)
            count++;
    }
    printf("Negative elements: %d", count);
    return 0;
}