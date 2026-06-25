#include <stdio.h>

int main() {
    char text[200];
    int idx = 0, len = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]s", text); 

    while(text[idx] != '\0') {
        len++;
        idx++;
    }

    printf("The length of the string is: %d\n", len);

    return 0;
}