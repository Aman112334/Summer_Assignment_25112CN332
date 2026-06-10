#include <stdio.h>

int main() {
    int num, temp, remainder, sum = 0, fact, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        remainder = temp % 10; 
        // Calculate the factorial of the extracted digit
        fact = 1;
        for (i = 1; i <= remainder; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is NOT a Strong Number.\n", num);
    }

    return 0;
}