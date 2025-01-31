#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int item, found = 0; 

    printf("Enter item to search: ");
    scanf("%d", &item);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == item) {
            printf("Item found at index %d.\n", i);
            found = 1;
            break;  
        }
    }

    if (!found) {
        printf("Item not found.\n");
    }

    return 0;
}
