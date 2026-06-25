#include <stdio.h>

int main() {
    char msg[200];
    int i = 0, v_cnt = 0, c_cnt = 0;

    printf("Enter the string: ");
    scanf(" %[^\n]s", msg);

    while(msg[i] != '\0') {
        char ch = msg[i];

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                v_cnt++;
            } else {
                c_cnt++; 
            }
        }
        i++;
    }

    printf("\nTotal Vowels = %d\n", v_cnt);
    printf("Total Consonants = %d\n", c_cnt);

    return 0;
}