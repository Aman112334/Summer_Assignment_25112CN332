#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // 2. Loop from 1 up to the number itself
    for (i = 1; i <= num; i++) {
        
        // 3. Check if 'i' divides 'num' without a remainder
        if (num % i == 0) {
            printf("%d ", i); // If true, print 'i'
        }
    }
    
    printf("\n");

    return 0;
}