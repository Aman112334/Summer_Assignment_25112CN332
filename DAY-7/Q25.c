#include <stdio.h>

int findFactorial(int n);

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d = %d\n", num, findFactorial(num));
    }

    return 0;
}
int findFactorial(int n) {
    
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        return n * findFactorial(n - 1);
    }
}