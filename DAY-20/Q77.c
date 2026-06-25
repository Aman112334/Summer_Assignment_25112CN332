#include <stdio.h>

int main() {
    int m1[10][10], m2[10][10], ans[10][10];
    int r1, c1, r2, c2, i, j, k, tot;

    printf("Enter rows and cols for 1st matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and cols for 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Multiplication is not possible with these dimensions!\n");
        return 0;
    }

    printf("\nEnter elements of 1st matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            tot = 0;
            for(k = 0; k < c1; k++) {
                tot = tot + (m1[i][k] * m2[k][j]);
            }
            ans[i][j] = tot;
        }
    }

    printf("\nResult after multiplication:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}