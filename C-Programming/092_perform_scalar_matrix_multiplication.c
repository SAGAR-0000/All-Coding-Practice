#include <stdio.h>
#define MAX 10
int main() {
    int mat[MAX][MAX], result[MAX][MAX], i, j, rows, cols, scalar;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Enter scalar value: ");
    scanf("%d", &scalar);
    // Scalar multiplication
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            result[i][j] = mat[i][j] * scalar;
        }
    }
    printf("Scalar multiplication result:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}