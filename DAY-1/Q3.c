#include <stdio.h>

int main() {
    int num;
    unsigned long long fact = 1;

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handling negative numbers
    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}
