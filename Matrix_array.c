// This code neatly explains about the nested arrays
#include <stdio.h>

// Function prototypes
void readMatrix(int matrix[][3]);

void displayMatrix(int matrix[][3]);

int findMax(int matrix[][3]);

void multiplyByTwo(int matrix[][3]);

void addMatrices(int matrix1[][3], int matrix2[][3], int result[][3]);

int main() {
    int matrix1[3][3];
    
    int matrix2[3][3];
    
    int result[3][3];

    printf("Enter elements for Matrix-1:\n");
    
    readMatrix(matrix1);

    printf("Enter elements for Matrix-2:\n");
    
    readMatrix(matrix2);

    printf("\nMatrix 1:\n");
    
    displayMatrix(matrix1);

    printf("\nMatrix 2:\n");
    
    displayMatrix(matrix2);

    int max = findMax(matrix1);
    
    printf("\nMaximum value in Matrix 1: %d\n", max);

    multiplyByTwo(matrix2);
    
    printf("\nMatrix 2 after multiplying by two:\n");
    
    displayMatrix(matrix2);

    printf("\nSum of Matrix 1 and Matrix 2:\n");
    addMatrices(matrix1, matrix2, result);
    displayMatrix(result);

    return 0;
}

void readMatrix(int matrix[][3]) {
   
    for (int i = 0; i < 3; i++) {
   
        for (int j = 0; j < 3; j++) {
   
            printf("Enter element at position (%d, %d): ", i, j);
   
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[][3]) {
   
    for (int i = 0; i < 3; i++) {
   
        for (int j = 0; j < 3; j++) {
   
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int findMax(int matrix[][3]) {
    
    int max = matrix[0][0];
    
    for (int i = 0; i < 3; i++) {
    
        for (int j = 0; j < 3; j++) {
    
            if (matrix[i][j] > max) {
    
                max = matrix[i][j];
            }
        }
    }
    return max;
}

void multiplyByTwo(int matrix[][3]) {

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            matrix[i][j] *= 2;
        }
    }
}

void addMatrices(int matrix1[][3], int matrix2[][3], int result[][3]) {
    
    for (int i = 0; i < 3; i++) {
    
        for (int j = 0; j < 3; j++) {
        
        result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
