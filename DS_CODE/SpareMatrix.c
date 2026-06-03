//8. Program to find if a given matrix is Sparse or Not and print Sparse Matrix.
#include <stdio.h>

#define MAX 10

// Function to find and print sparse matrix
void printSparse(int *mat[MAX][MAX], int r, int c) {
    int count = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (mat[i][j] == 0) count++;

    // Check if sparse (zeros > half total)
    if (count > (r * c) / 2) {
        printf("\nYes,It's a Sparse Matrix\n");
        printf("Row Col Value\n");
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                printf("%d  ",mat[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nNot a Sparse Matrix.\n");
    }
}

int main() {
    int r, c, *mat[MAX][MAX];

    printf("Experiment No. 8\n");

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    printSparse(mat, r, c);
    return 0;
}
