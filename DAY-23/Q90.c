#include <stdio.h>

int main() {
    char txt_input[200];
    int i, j;

    printf("Enter the string: ");
    scanf(" %[^\n]s", txt_input);

    for(i = 0; txt_input[i] != '\0'; i++) {
        
        for(j = i + 1; txt_input[j] != '\0'; j++) {
            
            if(txt_input[i] == txt_input[j]) {
                printf("\nFirst repeating character is: '%c'\n", txt_input[i]);
                return 0; 
            }
        }
    }

    printf("\nNo repeating characters found.\n");
    return 0;
}