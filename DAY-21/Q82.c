#include <stdio.h>

int main() {
    char word[200];
    int start = 0, end = 0;
    char tmp;

    printf("Enter a string to reverse: ");
    scanf(" %[^\n]s", word);
    while(word[end] != '\0') {
        end++;
    }
    end--; 
    while(start < end) {
        tmp = word[start];
        word[start] = word[end];
        word[end] = tmp;

        start++;
        end--;
    }

    printf("Reversed string is: %s\n", word);

    return 0;
}