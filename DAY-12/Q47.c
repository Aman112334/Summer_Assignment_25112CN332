#include <stdio.h>

void printFibonacci(int terms);

int main() {
    int n;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
    printFibonacci(n);

    return 0;
}

// Function to print Fibonacci sequence up to 'terms'
void printFibonacci(int terms) {
    int t1 = 0, t2 = 1;
    int nextTerm;
    if (terms <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return;
    }

    printf("Fibonacci Series: ");

    for (int i = 1; i <= terms; i++) {
        printf("%d ", t1);
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}