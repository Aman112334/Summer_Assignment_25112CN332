#include <stdio.h>

struct ContactData {
    char p_name[50];
    char phone_num[15]; 
};

int main() {
    struct ContactData my_book[100];
    int c_idx = 0;
    int act;

    do {
        printf("\n--- Phone Contact Manager ---\n");
        printf("1. Save New Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Exit\n");
        printf("Select option: ");
        scanf("%d", &act);

        switch(act) {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]s", my_book[c_idx].p_name);
                
                printf("Enter Phone Number: ");
                scanf(" %[^\n]s", my_book[c_idx].phone_num);
                
                c_idx++;
                printf("-> Contact Saved Successfully!\n");
                break;
                
            case 2:
                if(c_idx == 0) {
                    printf("-> Phonebook is empty.\n");
                } else {
                    printf("\n--- Saved Contacts ---\n");
                    for(int i = 0; i < c_idx; i++) {
                        printf("%d. %s - %s\n", i + 1, my_book[i].p_name, my_book[i].phone_num);
                    }
                }
                break;
                
            case 3:
                printf("Closing app.\n");
                break;
                
            default:
                printf("Invalid action! Try again.\n");
        }
    } while(act != 3);

    return 0;
}