#include <stdio.h>

int main() {
    char inputStr[200];
    int pos = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]s", inputStr);

    while(inputStr[pos] != '\0') {
       
        if(inputStr[pos] >= 'a' && inputStr[pos] <= 'z') {
            inputStr[pos] = inputStr[pos] - 32;
        }
        
        pos++;
    }

    printf("String in uppercase: %s\n", inputStr);

    return 0;
}