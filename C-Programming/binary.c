#include <stdio.h>

int main() {
    int n, target, found = 0;
    
    printf("Enter Number Of Elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter Target: ");
    scanf("%d", &target);

    int start = 0; 
    int end = n - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2; 

      
        if (arr[mid] == target) {
            printf("Target found at index: %d\n", mid);
            found = 1;
            break; 
        }
        
     
        if (arr[mid] < target) {
            start = mid + 1;
        } 
      
        else {
            end = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}