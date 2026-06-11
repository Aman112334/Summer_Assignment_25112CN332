#include <stdio.h>

int main() {
    int base, exponent, i;
    long long result = 1; 

    printf("Enter base (x): ");
    scanf("%d", &base);
    
    printf("Enter exponent (n): ");
    scanf("%d", &exponent);
    for (i = 1; i <= exponent; i++) {
        result = result * base;
    }
    printf("%d raised to the power of %d is: %lld\n", base, exponent, result);

    return 0;
}