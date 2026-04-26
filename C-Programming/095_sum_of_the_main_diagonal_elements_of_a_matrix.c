#include <stdio.h>
#define MAX 10
int main() {
    int mat[MAX][MAX], i, j, rows, cols, sum = 0;
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
            if(i == j)
                sum += mat[i][j];
        }
    }
    printf("Sum of main diagonal elements: %d", sum);
    return 0;
}