#include <stdio.h>

int main() {
    char entry_str[200];
    int freq_map[256] = {0};
    int idx = 0, max_cnt = 0;
    char ans;

    printf("Enter a string: ");
    scanf(" %[^\n]s", entry_str);

    while(entry_str[idx] != '\0') {
        if(entry_str[idx] != ' ') {
           
            freq_map[(int)entry_str[idx]]++;
        }
        idx++;
    }

    for(int k = 0; k < 256; k++) {
        if(freq_map[k] > max_cnt) {
            max_cnt = freq_map[k];
            ans = (char)k; 
        }
    }

    printf("\nMaximum occurring character is '%c' (appears %d times).\n", ans, max_cnt);

    return 0;
}