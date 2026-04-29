#include <stdio.h>
#define MAX 10
int main() {
    int mat[MAX][MAX], i, j, rows, cols, temp;
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
    // Interchange diagonals
    for(i = 0; i < rows; i++) {
        if(i != rows - 1 - i) {
            temp = mat[i][i];
            mat[i][i] = mat[i][rows - 1 - i];
            mat[i][rows - 1 - i] = temp;
        }
    }
    printf("Matrix after interchanging diagonals:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}