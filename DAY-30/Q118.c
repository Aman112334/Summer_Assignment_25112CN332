#include <stdio.h>

struct BookRecord {
    int b_id;
    char b_title[50];
    char b_author[50];
    int is_issued; 
};

int main() {
    struct BookRecord library[100]; 
    int total_books = 0;
    int choice, search_id, i, found;

    while(1) {
        // Main Menu
        printf("\n========== MINI LIBRARY SYSTEM ==========\n");
        printf("1. Add a New Book\n");
        printf("2. Display All Books\n");
        printf("3. Issue a Book\n");
        printf("4. Return a Book\n");
        printf("5. Exit System\n");
        printf("=========================================\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
               
                printf("\nEnter Book ID: ");
                scanf("%d", &library[total_books].b_id);
                
                printf("Enter Book Title: ");
                scanf(" %[^\n]s", library[total_books].b_title);
                
                printf("Enter Author Name: ");
                scanf(" %[^\n]s", library[total_books].b_author);
                
                library[total_books].is_issued = 0; // Defaults to available
                
                total_books++;
                printf("-> Book successfully added to the library!\n");
                break;

            case 2:
             
                if(total_books == 0) {
                    printf("\n-> The library is currently empty.\n");
                } else {
                    printf("\nID\tStatus\t\tTitle (Author)\n");
                    printf("---------------------------------------------------\n");
                    for(i = 0; i < total_books; i++) {
                        printf("%d\t", library[i].b_id);
                        
                        if(library[i].is_issued == 0) {
                            printf("[Available]\t");
                        } else {
                            printf("[Issued]\t");
                        }
                        
                        printf("%s (%s)\n", library[i].b_title, library[i].b_author);
                    }
                }
                break;

            case 3:
                // Issuing a book
                printf("\nEnter the Book ID you want to issue: ");
                scanf("%d", &search_id);
                found = 0;
                
                for(i = 0; i < total_books; i++) {
                    if(library[i].b_id == search_id) {
                        found = 1;
                        if(library[i].is_issued == 0) {
                            library[i].is_issued = 1; 
                            printf("-> Success! You have issued '%s'.\n", library[i].b_title);
                        } else {
                            printf("-> Sorry, '%s' is already issued to someone else.\n", library[i].b_title);
                        }
                        break; 
                    }
                }
                
                if(found == 0) {
                    printf("-> Error: Book ID %d not found in our records.\n", search_id);
                }
                break;

            case 4:
                // Returning a book
                printf("\nEnter the Book ID you want to return: ");
                scanf("%d", &search_id);
                found = 0;
                
                for(i = 0; i < total_books; i++) {
                    if(library[i].b_id == search_id) {
                        found = 1;
                        if(library[i].is_issued == 1) {
                            library[i].is_issued = 0; 
                            printf("-> Success! '%s' has been returned to the shelf.\n", library[i].b_title);
                        } else {
                            printf("-> Wait, '%s' was never issued out!\n", library[i].b_title);
                        }
                        break;
                    }
                }
                
                if(found == 0) {
                    printf("-> Error: Book ID %d does not belong to this library.\n", search_id);
                }
                break;

            case 5:
                // Exit
                printf("\nClosing library system. Have a great day!\n");
                return 0;

            default:
                printf("\n-> Invalid choice! Please select a valid number from the menu.\n");
        }
    }

    return 0;
}