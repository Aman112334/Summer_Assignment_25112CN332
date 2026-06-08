#include <stdio.h>

int main() {
    long long num;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);xexe
    // If the user enters 0, it technically has 1 digit
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }
    printf("Total digits = %d\n", count);
    return 0;
}