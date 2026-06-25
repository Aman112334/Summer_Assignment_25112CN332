#include <stdio.h>

int main() {
    char raw_text[200];
    int read_pos = 0, write_pos = 0;

    printf("Enter string with spaces: ");
    scanf(" %[^\n]s", raw_text);

    while(raw_text[read_pos] != '\0') {
        
        if(raw_text[read_pos] != ' ') {
            raw_text[write_pos] = raw_text[read_pos];
            write_pos++; 
        }
        
        read_pos++; 
    }
    
    raw_text[write_pos] = '\0';

    printf("\nString after removing spaces: %s\n", raw_text);

    return 0;
}