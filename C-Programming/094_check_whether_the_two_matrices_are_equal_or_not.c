#include <stdio.h>
#define MAX 10
int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], i, j, rows, cols, equal = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    // Check equality
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(mat1[i][j] != mat2[i][j]) {
                equal = 0;
                break;
            }
        }
        if(!equal)
            break;
    }
    if(equal)
        printf("Matrices are equal");
    else
        printf("Matrices are not equal");
    return 0;
}