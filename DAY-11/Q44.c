#include <stdio.h>

// Function declaration
int findFactorial(int n);

int main() {
    int num, result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        result = findFactorial(num);
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}

int findFactorial(int n) {
    int i;
    int fact = 1; 

    
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact; 
}