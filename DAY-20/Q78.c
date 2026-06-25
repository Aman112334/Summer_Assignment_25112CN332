#include <stdio.h>

int main() {
    int grid[10][10];
    int n, i, j, flag = 1;

    printf("Enter size of square matrix (N x N): ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(grid[i][j] != grid[j][i]) {
                flag = 0; 
                break;
            }
        }
    }

    if(flag == 1) {
        printf("\nThe given matrix is symmetric.\n");
    } else {
        printf("\nThe given matrix is NOT symmetric.\n");
    }

    return 0;
}