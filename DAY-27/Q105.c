#include <stdio.h>
struct StudentInfo {
    int roll;
    char name[50];
    float grade;
};

int main() {
   
    struct StudentInfo batch[100]; 
    int total_stu = 0;
    int opt;

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add New Student\n");
        printf("2. View All Students\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &opt);

        if(opt == 1) {
            printf("Enter Roll Number: ");
            scanf("%d", &batch[total_stu].roll);
            
            printf("Enter Name: ");
            scanf(" %[^\n]s", batch[total_stu].name); // Space handles leftover newline characters
            
            printf("Enter Grade (out of 100): ");
            scanf("%f", &batch[total_stu].grade);
            
            total_stu++;
            printf("-> Student added successfully!\n");
        }
        else if(opt == 2) {
            if(total_stu == 0) {
                printf("-> No records found!\n");
            } else {
                printf("\nRoll\tName\t\tGrade\n");
                printf("-----------------------------------\n");
                for(int i = 0; i < total_stu; i++) {
                    printf("%d\t%s\t\t%.2f\n", batch[i].roll, batch[i].name, batch[i].grade);
                }
            }
        }
        else if(opt == 3) {
            printf("Closing system...\n");
        }
        else {
            printf("Invalid option! Try again.\n");
        }
        
    } while(opt != 3);

    return 0;
}