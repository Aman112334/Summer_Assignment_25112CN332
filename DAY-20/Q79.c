#include <stdio.h>

int main() {
    int data[10][10];
    int r, c, i, j, row_tot;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements for the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &data[i][j]);
        }
    }

    printf("\nRow-wise sums:\n");
    for(i = 0; i < r; i++) {
        row_tot = 0; 
        
        for(j = 0; j < c; j++) {
            row_tot = row_tot + data[i][j];
            printf("%d ", data[i][j]);
        }
        
        printf(" = %d\n", row_tot);
    }

    return 0;
}