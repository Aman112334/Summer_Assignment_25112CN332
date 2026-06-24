#include <stdio.h>

int main() {
    int a[10][10], b[10][10], add[10][10];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of 1st matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // adding the two matrices
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            add[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of matrices is:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }

    return 0;
}