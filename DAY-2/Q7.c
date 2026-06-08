#include <stdio.h>

int main() {
    int num, rem, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        rem = num % 10;              // Extract the last digit
        product = product * rem;     // Multiply it with the running product
        num = num / 10;              // Remove the last digit
    }

    printf("Product of digits = %d\n", product);

    return 0;
}