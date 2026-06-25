#include <stdio.h>

int main() {
    char strA[100], strB[100];
    int counts[256] = {0}; 
    int pos = 0, is_match = 1, i;

    printf("Enter first string: ");
    scanf(" %[^\n]s", strA);

    printf("Enter second string: ");
    scanf(" %[^\n]s", strB);
    while(strA[pos] != '\0') {
        counts[(int)strA[pos]]++;
        pos++;
    }

    pos = 0;
    while(strB[pos] != '\0') {
        counts[(int)strB[pos]]--;
        pos++;
    }

    for(i = 0; i < 256; i++) {
        if(counts[i] != 0) {
            is_match = 0; 
            break;
        }
    }

    if(is_match == 1) {
        printf("\nThe strings are Anagrams.\n");
    } else {
        printf("\nThe strings are NOT Anagrams.\n");
    }

    return 0;
}