#include <stdio.h>

int main() {
    char sentence[300];
    int i = 0, w_count = 1; 

    printf("Enter a sentence: ");
    scanf(" %[^\n]s", sentence);

    if (sentence[0] == '\0') {
        w_count = 0;
    }

    while(sentence[i] != '\0') {
        if(sentence[i] == ' ' && sentence[i+1] != ' ' && sentence[i+1] != '\0') {
            w_count++;
        }
        i++;
    }

    printf("\nTotal number of words = %d\n", w_count);

    return 0;
}