#include <stdio.h>

int main() {
    int mat[10][10], trans[10][10];
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++) {       
        for (int j = 0; j < rows; j++) {   
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}