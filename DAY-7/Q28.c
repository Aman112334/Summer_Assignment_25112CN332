#include <stdio.h>
int reverseNumber(int n, int rev);

int main() {
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    result = reverseNumber(num, 0);

    printf("Reversed number = %d\n", result);

    return 0;
}
int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    // Recursive Case
    else {
        return reverseNumber(n / 10, rev * 10 + (n % 10));
    }
}