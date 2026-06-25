#include <stdio.h>

int main() {
    int vals[10][10];
    int rows, cols, i, j, c_sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &vals[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", vals[i][j]);
        }
        printf("\n");
    }

    printf("\nColumn-wise sums are:\n");
  
    for(j = 0; j < cols; j++) {
        c_sum = 0; 
        
        for(i = 0; i < rows; i++) {
            c_sum = c_sum + vals[i][j];
        }
        
        printf("Sum of Col %d is %d\n", j + 1, c_sum);
    }

    return 0;
}