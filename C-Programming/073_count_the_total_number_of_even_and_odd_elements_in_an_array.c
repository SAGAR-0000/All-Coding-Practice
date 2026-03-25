#include <stdio.h>
int main() {
    int arr[100], i, n, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even elements: %d\nOdd elements: %d", even, odd);
    return 0;
}