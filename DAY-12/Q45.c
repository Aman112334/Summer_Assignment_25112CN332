#include <stdio.h>

// Function prototype
int isPalindrome(int num);

int main() {
    int number;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is NOT a palindrome number.\n", number);
    }

    return 0;
}

// Function to check if a number is a palindrome
// Returns 1 if true, 0 if false
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

    if (num < 0) {
        return 0;
    }
    while (num > 0) {
        remainder = num % 10;                
        reversedNum = (reversedNum * 10) + remainder; 
        num = num / 10;                        
    }
    if (originalNum == reversedNum) {
        return 1; 
    } else {
        return 0; 
    }
}