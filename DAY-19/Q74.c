#include <stdio.h>

int main() {
    int x[10][10], y[10][10], sub[10][10];
    int row, col, i, j;

    printf("Enter rows and cols: ");
    scanf("%d %d", &row, &col);

    printf("Input for first matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    printf("Input for second matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &y[i][j]);
        }
    }

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            sub[i][j] = x[i][j] - y[i][j];
        }
    }

    printf("\nDifference is:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}