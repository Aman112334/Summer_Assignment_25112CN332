#include <stdio.h>

int main() {
    int decimalNum, temp, i = 0;
    int binaryNum[32]; 

    // 1. Prompt the user for input
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Save a copy of the number
    temp = decimalNum;

    // Handle the special case where the user inputs 0
    if (temp == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // 2. Loop to repeatedly divide by 2 and store remainders
    while (temp > 0) {
        binaryNum[i] = temp % 2; // Store the remainder (0 or 1) in the array
        temp = temp / 2;         // Divide the number by 2 to get the next quotient
        i++;                     // Move to the next position in the array
    }
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0;
}