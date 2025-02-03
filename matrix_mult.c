#include <stdio.h>

#define R1 2
#define C1 3
#define R2 3
#define C2 2

void matrixMultiplication(int m1[R1][C1], int m2[R2][C2], int result[R1][C2]) {
    int i, j, k;

    //result matrix = 0
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            result[i][j] = 0;
        }
    }

    // main mult
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            for (k = 0; k < C1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int mat[rows][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m1[R1][C1] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int m2[R2][C2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int result[R1][C2];

    matrixMultiplication(m1, m2, result);

    printf("Matrix 1:\n");
    printMatrix(R1, C1, m1);

    printf("\nMatrix 2:\n");
    printMatrix(R2, C2, m2);

    printf("\nResultant Matrix:\n");
    printMatrix(R1, C2, result);

    return 0;
}