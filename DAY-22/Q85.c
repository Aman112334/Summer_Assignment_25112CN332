#include <stdio.h>

int main() {
    char str_val[200];
    int len = 0, i;
    int is_pal = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]s", str_val);

    while(str_val[len] != '\0') {
        len++;
    }

    for(i = 0; i < len / 2; i++) {
        if(str_val[i] != str_val[len - 1 - i]) {
            is_pal = 0; 
            break;      
        }
    }

    if(is_pal == 1) {
        printf("\nIt is a palindrome string.\n");
    } else {
        printf("\nIt is NOT a palindrome string.\n");
    }

    return 0;
}