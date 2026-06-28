#include <stdio.h>
struct LibBook {
    int book_id;
    char title[50];
    char author[50];
};

int main() {
    struct LibBook shelf[100]; 
    int b_count = 0;
    int ch;

    while(1) {
        printf("\n--- Library Menu ---\n");
        printf("1. Add a Book\n");
        printf("2. View all Books\n");
        printf("3. Exit\n");
        printf("Select option: ");
        scanf("%d", &ch);

        if(ch == 1) {
            printf("Enter Book ID: ");
            scanf("%d", &shelf[b_count].book_id);
            
            printf("Enter Book Title: ");
            scanf(" %[^\n]s", shelf[b_count].title); 
            
            printf("Enter Author Name: ");
            scanf(" %[^\n]s", shelf[b_count].author);
            
            b_count++;
            printf("-> Book added to the library!\n");
        }
        else if(ch == 2) {
            if(b_count == 0) {
                printf("-> No books in the library yet.\n");
            } else {
                printf("\nID\tTitle\t\tAuthor\n");
                printf("--------------------------------------\n");
                for(int i = 0; i < b_count; i++) {
                    printf("%d\t%s\t\t%s\n", shelf[i].book_id, shelf[i].title, shelf[i].author);
                }
            }
        }
        else if(ch == 3) {
            printf("Exiting library system...\n");
            break; 
        }
        else {
            printf("Wrong choice! Please try again.\n");
        }
    }
    
    return 0;
}