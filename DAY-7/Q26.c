#include <stdio.h>
int findFibonacci(int n);

int main() {
    int terms, i;

    printf("Enter the number of terms you want to print: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    for (i = 0; i < terms; i++) {
        printf("%d ", findFibonacci(i));
    }
    printf("\n");

    return 0;
}
int findFibonacci(int n) {
    // Base Cases
    if (n == 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    } 
    else {
        return findFibonacci(n - 1) + findFibonacci(n - 2);
    }
}