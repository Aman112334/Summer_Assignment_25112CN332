#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        remainder = num % 10;      // Get the last digit
        sum = sum + remainder;     // Add it to the total sum
        num = num / 10;            // Remove the last digit from the number
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}