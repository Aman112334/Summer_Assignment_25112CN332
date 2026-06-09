#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;

    printf("Enter which term you want to find (n): ");
    scanf("%d", &n);
    if (n == 1) {
        printf("The 1st Fibonacci term is %d\n", t1);
    } 
    else if (n == 2) {
        printf("The 2nd Fibonacci term is %d\n", t2);
    } 
    else {
        for (i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("The %dth Fibonacci term is %d\n", n, nextTerm);
    }

    return 0;
}