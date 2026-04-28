#include <stdio.h>
#define MAX 10
int main() {
    int mat[MAX][MAX], rowSum[MAX], colSum[MAX], i, j, rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }
    // Calculate column sums
    for(j = 0; j < cols; j++) {
        colSum[j] = 0;
        for(i = 0; i < rows; i++) {
            colSum[j] += mat[i][j];
        }
    }
    printf("Row sums: ");
    for(i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\nColumn sums: ");
    for(j = 0; j < cols; j++) {
        printf("%d ", colSum[j]);
    }
    return 0;
}