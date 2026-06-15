#include <stdio.h>

// Function declaration
int findMaximum(int a, int b);

int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call: passing num1 and num2 as arguments
    max = findMaximum(num1, num2);

    printf("The maximum number is: %d\n", max);

    return 0;
}

int findMaximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b; 
    }
}