#include <stdio.h>

#define MAX_SIZE 10

void read(int matrix[MAX_SIZE][MAX_SIZE], int rows, int columns) {
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void display(int matrix[MAX_SIZE][MAX_SIZE], int rows, int columns) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE],
                      int result[MAX_SIZE][MAX_SIZE], int rows1, int columns1, int columns2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, columns1, rows2, columns2;

    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &rows1, &columns1);

    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &rows2, &columns2);

    if (columns1 != rows2) {
        printf("Error: Incompatible matrix sizes for multiplication.\n");
        return 0;
    }

    printf("Enter the elements of matrix 1:\n");
    
    read(matrix1, rows1, columns1);

    printf("Enter the elements of matrix 2:\n");
    
    read(matrix2, rows2, columns2);

    multiplyMatrices(matrix1, matrix2, result, rows1, columns1, columns2);

    printf("Resultant matrix:\n");
    
    display(result, rows1, columns2);

    return 0;
}
