#include <stdio.h>

// 1. Function Declaration
int findSum(int a, int b);

int main() {
    int num1, num2, total;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    total = findSum(num1, num2);

    printf("Sum of %d and %d = %d\n", num1, num2, total);

    return 0;
}
int findSum(int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}