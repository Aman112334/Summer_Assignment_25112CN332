#include <stdio.h>

int main() {
    char text_line[300];
    int i = 0, curr_len = 0, max_len = 0;
    int best_start = 0, temp_start = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]s", text_line);

    while(1) {
        if(text_line[i] == ' ' || text_line[i] == '\0') {
            
            if(curr_len > max_len) {
                max_len = curr_len;
                best_start = temp_start; 
            }
            
            curr_len = 0; 
            temp_start = i + 1; 
            
        } else {
            curr_len++; 
        }

        if(text_line[i] == '\0') {
            break;
        }
        i++;
    }

    printf("\nThe longest word is: ");
    for(i = best_start; i < best_start + max_len; i++) {
        printf("%c", text_line[i]);
    }
    printf("\nLength: %d\n", max_len);

    return 0;
}