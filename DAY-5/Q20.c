#include <stdio.h>

int main() {
    int num, i, maxPrime;


    printf("Enter a positive integer: ");
    scanf("%d", &num);

    maxPrime = -1;


    while (num % 2 == 0) {
        maxPrime = 2;
        num = num / 2;
    }
    for (i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num = num / i;
        }
    }
    if (num > 2) {
        maxPrime = num;
    }
    printf("The largest prime factor is: %d\n", maxPrime);

    return 0;
}