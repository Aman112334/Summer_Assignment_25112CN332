#include <stdio.h>

int main() {
    char s1[100], s2[100], combo[200];
    int len1 = 0, len2 = 0;
    int i, j, is_rot = 0;

    printf("Enter the original string: ");
    scanf(" %[^\n]s", s1);
    
    printf("Enter the string to check: ");
    scanf(" %[^\n]s", s2);

    while(s1[len1] != '\0') len1++;
    while(s2[len2] != '\0') len2++;

    if(len1 != len2) {
        printf("\nNot a rotation.\n");
        return 0;
    }
    for(i = 0; i < len1; i++) {
        combo[i] = s1[i];            
        combo[i + len1] = s1[i];   
    }
    combo[len1 * 2] = '\0'; 

    for(i = 0; i <= (len1 * 2) - len2; i++) {
        int match = 1;
        
        for(j = 0; j < len2; j++) {
            if(combo[i + j] != s2[j]) {
                match = 0;
                break;
            }
        }
        
        if(match == 1) {
            is_rot = 1;
            break;
        }
    }

    if(is_rot == 1) {
        printf("\nYes, the second string is a rotation of the first.\n");
    } else {
        printf("\nNo, it is not a rotation.\n");
    }

    return 0;
}