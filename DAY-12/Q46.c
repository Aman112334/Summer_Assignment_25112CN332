#include <stdio.h>
int isArmstrong(int num);
int countDigits(int num);
int power(int base, int exp);

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is NOT an Armstrong number.\n", number);
    }

    return 0;
}


int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}


int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int remainder;
    
    int digits = countDigits(num);

    while (num > 0) {
        remainder = num % 10;                 
        sum += power(remainder, digits);      
        num /= 10;                             
    }

    // Check if the sum matches the original number
    if (sum == originalNum) {
        return 1;
    } else {
        return 0;
    }
}