#include <stdio.h>

int main() {
    char my_str[200];
    int freq_arr[256] = {0}; 
    int k = 0, i;

    printf("Enter the string: ");
    scanf(" %[^\n]s", my_str);

    while(my_str[k] != '\0') {
        freq_arr[(int)my_str[k]]++;
        k++;
    }

    printf("\nCharacter Frequencies:\n");
    for(i = 0; i < 256; i++) {
        if(freq_arr[i] > 0 && i != ' ') { 
            printf("'%c' occurs %d times\n", i, freq_arr[i]);
        }
    }

    return 0;
}