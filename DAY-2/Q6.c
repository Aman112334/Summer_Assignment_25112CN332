#include <stdio.h>

int main() {
    int num, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        rem = num % 10;                  // Extract the last digit
        reverse = reverse * 10 + rem;    // Append it to the reversed number
        num = num / 10;                  // Remove the last digit from the original number
    }

    printf("Reversed Number: %d\n", reverse);

    return 0;
}