#include <stdio.h>

int main() {
    int rolls[50];
    char names[50][50]; 
    float marks[50];
    int count = 0, sel;

    do {
        printf("\n--- Student Database (Array Method) ---\n");
        printf("1. Insert Record\n");
        printf("2. Display Records\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &sel);

        if(sel == 1) {
            printf("Enter Roll No: ");
            scanf("%d", &rolls[count]);
            
            printf("Enter Name: ");
            scanf(" %[^\n]s", names[count]);
            
            printf("Enter Marks: ");
            scanf("%f", &marks[count]);
            
            count++;
            printf("-> Record Saved!\n");
        }
        else if(sel == 2) {
            printf("\nRoll\tName\t\tMarks\n");
            printf("---------------------------------\n");
            for(int i = 0; i < count; i++) {
               
                printf("%d\t%s\t\t%.2f\n", rolls[i], names[i], marks[i]);
            }
        }
    } while(sel != 3);

    return 0;
}