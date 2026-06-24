#include <stdio.h>

int main() {
    int mat[10][10], n;
    int mainDiagSum = 0, secDiagSum = 0;

    printf("Enter the size of the square matrix (N): ");
    scanf("%d", &n);

    printf("\nEnter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Diagonal Sum Logic
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            // Condition for Primary Diagonal
            if (i == j) {
                mainDiagSum += mat[i][j];
            }
            
            // Condition for Secondary Diagonal
            if ((i + j) == (n - 1)) {
                secDiagSum += mat[i][j];
            }
        }
    }

    printf("\nThe Matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // Displaying sums
    printf("\nSum of Primary (Main) Diagonal = %d\n", mainDiagSum);
    printf("Sum of Secondary Diagonal      = %d\n", secDiagSum);

    return 0;
}