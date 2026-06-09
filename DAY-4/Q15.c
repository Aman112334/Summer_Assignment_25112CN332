#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    while (originalNum != 0) {
        originalNum = originalNum / 10;
        n++;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        int power = 1;
        for (int i = 0; i < n; i++) {
            power = power * remainder;
        }
        
        result = result + power;
        originalNum = originalNum / 10;
    }
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}