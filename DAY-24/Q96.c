#include <stdio.h>

int main() {
    char inp_str[200], clean_str[200];
    int visited[256] = {0}; 
    int read_i = 0, write_i = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]s", inp_str);

    while(inp_str[read_i] != '\0') {
        char current_char = inp_str[read_i];
        
        if(visited[(int)current_char] == 0 || current_char == ' ') {
            
            clean_str[write_i] = current_char;
            
            if(current_char != ' ') {
                visited[(int)current_char] = 1; 
            }
            
            write_i++;
        }
        read_i++;
    }
    
    clean_str[write_i] = '\0'; 

    printf("\nString after removing duplicates: %s\n", clean_str);

    return 0;
}