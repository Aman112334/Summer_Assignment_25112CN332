#include <stdio.h>

int main() {
    char word1[200];
    int i, j, flag;

    printf("Enter a string: ");
    scanf(" %[^\n]s", word1);

    printf("\nFirst non-repeating character is: ");
    for(i = 0; word1[i] != '\0'; i++) {
        flag = 0; 
        
        for(j = 0; word1[j] != '\0'; j++) {

            if(i != j && word1[i] == word1[j]) {
                flag = 1; 
                break; 
            }
        }
        
        if(flag == 0) {
            printf("'%c'\n", word1[i]);
            return 0; 
        }
    }
    
    printf("None found.\n");
    return 0;
}