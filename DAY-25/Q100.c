#include <stdio.h>

int main() {
    char w_list[20][50];
    char t_word[50];
    int n, i, j, l1, l2, idx;

    printf("Enter the number of words: ");
    scanf("%d", &n);

    printf("Enter the words:\n");
    for(i = 0; i < n; i++) {
        scanf(" %[^\n]s", w_list[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            
            l1 = 0;
            while(w_list[j][l1] != '\0') { l1++; }
            
            l2 = 0;
            while(w_list[j+1][l2] != '\0') { l2++; }

            if(l1 > l2) {
                
                idx = 0;
                while(w_list[j][idx] != '\0') { t_word[idx] = w_list[j][idx]; idx++; } 
                t_word[idx] = '\0';
                
                idx = 0;
                while(w_list[j+1][idx] != '\0') { w_list[j][idx] = w_list[j+1][idx]; idx++; } 
                w_list[j][idx] = '\0';
                
                idx = 0;
                while(t_word[idx] != '\0') { w_list[j+1][idx] = t_word[idx]; idx++; } 
                w_list[j+1][idx] = '\0';
            }
        }
    }

    printf("\nWords Sorted by Length (Shortest to Longest):\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", w_list[i]);
    }

    return 0;
}