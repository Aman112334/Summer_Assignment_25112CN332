#include <stdio.h>

struct Worker {
    int id_num;
    char full_name[50];
    char job_role[50];
};

int main() {
    struct Worker staff[50];
    int count = 0, choice;

    while(1) { 
        printf("\n*** Employee Database ***\n");
        printf("1. Register Employee\n");
        printf("2. Display Employee List\n");
        printf("3. Quit\n");
        printf("Enter choice (1-3): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &staff[count].id_num);
                
                printf("Enter Full Name: ");
                scanf(" %[^\n]s", staff[count].full_name);
                
                printf("Enter Job Title: ");
                scanf(" %[^\n]s", staff[count].job_role);
                
                count++;
                printf("-> Employee registered.\n");
                break;
                
            case 2:
                printf("\nID\tName\t\tRole\n");
                printf("--------------------------------------\n");
                for(int i = 0; i < count; i++) {
                    printf("%d\t%s\t%s\n", staff[i].id_num, staff[i].full_name, staff[i].job_role);
                }
                break;
                
            case 3:
                printf("Exiting database.\n");
                return 0; 
                
            default:
                printf("Wrong input, please select 1, 2, or 3.\n");
        }
    }
    
    return 0;
}