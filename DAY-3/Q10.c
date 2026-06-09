#include <stdio.h>

int main() {
    int start, end, i, j, prime;

    printf("Enter starting number: ");
    scanf("%d", &start);
    
    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if (i == 0 || i == 1) {
            continue;
        }
        prime = 0; 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                prime = 1; 
                break;
            }
        }
        if (prime == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}