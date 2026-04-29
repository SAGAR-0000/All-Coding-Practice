#include <stdio.h>
#define MAX 10
int main() {
    int mat[MAX][MAX], i, j, rows, cols;
    printf("Enter number of rows and columns (must be square): ");
    scanf("%d %d", &rows, &cols);
    if(rows != cols) {
        printf("Not a square matrix");
        return 0;
    }
    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Upper triangular matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(j >= i)
                printf("%d ", mat[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}