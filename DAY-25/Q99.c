#include <stdio.h>

int main() {
    char list[20][50];
    char temp[50];
    int num, i, j, p, idx;

    printf("Enter number of names: ");
    scanf("%d", &num);

    printf("Enter the names:\n");
    for(i = 0; i < num; i++) {
        scanf(" %[^\n]s", list[i]);
    }

    for(i = 0; i < num - 1; i++) {
        for(j = 0; j < num - i - 1; j++) {
            
            p = 0;
            // Compare characters until they differ or we hit the end
            while(list[j][p] != '\0' && list[j][p] == list[j+1][p]) {
                p++;
            }

            if(list[j][p] > list[j+1][p]) {
                
                idx = 0;
                while(list[j][idx] != '\0') { temp[idx] = list[j][idx]; idx++; } 
                temp[idx] = '\0';
                
                idx = 0;
                while(list[j+1][idx] != '\0') { list[j][idx] = list[j+1][idx]; idx++; } 
                list[j][idx] = '\0';
                
                idx = 0;
                while(temp[idx] != '\0') { list[j+1][idx] = temp[idx]; idx++; } 
                list[j+1][idx] = '\0';
            }
        }
    }

    printf("Names in Alphabetical Order:\n");
    for(i = 0; i < num; i++) {
        printf("%s\n", list[i]);
    }

    return 0;
}