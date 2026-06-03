//7. Write a program to print the transpose of a given matrix using function.
#include<stdio.h>
#define MAX 3
void transpose(int matrix[MAX][MAX], int rows, int cols);
int main(){

    int matrix[MAX][MAX];
    int rows, cols, i, j;

    printf("Experiment No. 7\n");

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    transpose(matrix, rows, cols);

    return 0;
}

void transpose(int matrix[MAX][MAX], int rows, int cols) {
    int i, j;

    printf("\nTranspose of the matrix:\n");

    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}