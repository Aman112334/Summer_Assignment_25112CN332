#include <stdio.h>

int main() {
    int num, temp, count = 0;


    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    // 2. Loop to count the number of set bits (1s) in the binary representation of the number
    while (temp > 0) {
        
        if (temp & 1) {
            count++; 
        }
        
        // Use Right Shift (>>) operator to shift bits one position to the right
        temp = temp >> 1;
    }
    printf("Number of set bits (1s) in %d is: %d\n", num, count);

    return 0;
}