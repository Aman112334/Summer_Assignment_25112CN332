#include <stdio.h>

int main() {
    char raw_str[200];
    int i = 0, count;

    printf("Enter string to compress: ");
    scanf(" %[^\n]s", raw_str);

    printf("\nCompressed string: ");
    
    while(raw_str[i] != '\0') {
        count = 1; 
        
        while(raw_str[i] == raw_str[i+1] && raw_str[i] != '\0') {
            count++;
            i++; 
        }
        
        printf("%c%d", raw_str[i], count);
        i++; 
    }
    
    printf("\n");
    return 0;
}