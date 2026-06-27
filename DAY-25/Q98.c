#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int mark1[256] = {0}; 
    int mark2[256] = {0};
    int idx = 0;

    printf("Enter first string: ");
    scanf(" %[^\n]s", s1);

    printf("Enter second string: ");
    scanf(" %[^\n]s", s2);

    while(s1[idx] != '\0') {
        mark1[(int)s1[idx]] = 1;
        idx++;
    }
    idx = 0;
    while(s2[idx] != '\0') {
        mark2[(int)s2[idx]] = 1;
        idx++;
    }

    printf("\nCommon characters: ");
    int found_any = 0;
    
    for(int k = 0; k < 256; k++) {

        if(mark1[k] == 1 && mark2[k] == 1 && k != ' ') {
            printf("%c ", k);
            found_any = 1;
        }
    }

    if(found_any == 0) {
        printf("None");
    }
    printf("\n");

    return 0;
}