#include <stdio.h>
int main() {
    int n,multiply=1,i;
    printf("Enter the number to write its table: ");
    scanf("%d", &n);
    printf("Enter the number of multiples to display: ");
    scanf("%d", &multiply);
        for(i=1; i<=multiply; i++) {
            printf("%d x %d = %d\n", n, i, n*i);
        }
    
    return 0;
}
