#include <stdio.h>

int main() {
    int binaryNum, temp, remainder;
    int decimalNum = 0, base = 1; // base starts at 1 (2^0)

    printf("Enter a binary number (digits using only 0 and 1): ");
    scanf("%d", &binaryNum);

    temp = binaryNum;
    while (temp > 0) {
        remainder = temp % 10; 
        
        
        decimalNum = decimalNum + (remainder * base);
        
        temp = temp / 10;      
        base = base * 2;       
    }
    printf("Decimal equivalent of %d is: %d\n", binaryNum, decimalNum);

    return 0;
}