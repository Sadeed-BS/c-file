#include <stdio.h>

int calculateDeterminant(int matrix[10][10], int n) {
    int determinant = 0;
    int submatrix[10][10];

    if (n == 2) {
        return (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
    } else {
        for (int x = 0; x < n; x++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            determinant = determinant + (pow(-1, x) * matrix[0][x] * calculateDeterminant(submatrix, n - 1));
        }
    }
    return determinant;
}

int main() {
    int n;
    int matrix[10][10];

    // Input matrix size
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate determinant
    int determinant = calculateDeterminant(matrix, n);

    // Check if the matrix is singular
    if (determinant == 0) {
        printf("The matrix is singular.\n");
    } else {
        printf("The matrix is not singular.\n");
    }

    return 0;
}