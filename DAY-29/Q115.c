#include <stdio.h>

int main() {
    int ch;
    char strA[100], strB[100];
    int i, j, len;

    do {
        printf("\n--- String Operations ---\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Exit\n");
        printf("Select option: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("Enter a string: ");
                scanf(" %[^\n]s", strA);
                len = 0;
                while(strA[len] != '\0') { len++; }
                printf("-> Length is: %d\n", len);
                break;

            case 2:
                printf("Enter source string: ");
                scanf(" %[^\n]s", strA);
                i = 0;
                // Manual string copy
                while(strA[i] != '\0') {
                    strB[i] = strA[i];
                    i++;
                }
                strB[i] = '\0';
                printf("-> Copied String is: %s\n", strB);
                break;

            case 3:
                printf("Enter first string: ");
                scanf(" %[^\n]s", strA);
                printf("Enter second string: ");
                scanf(" %[^\n]s", strB);
                
                i = 0;
                while(strA[i] != '\0') { i++; } 
                
                j = 0;
                while(strB[j] != '\0') {
                    strA[i] = strB[j];
                    i++;
                    j++;
                }
                strA[i] = '\0';
                printf("-> Concatenated String: %s\n", strA);
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while(ch != 4);

    return 0;
}