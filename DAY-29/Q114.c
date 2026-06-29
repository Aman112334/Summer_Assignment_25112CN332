#include <stdio.h>

int main() {
    int my_arr[100];
    int sz = 0, choice, i;
    int pos, val;

    printf("Enter initial number of elements: ");
    scanf("%d", &sz);
    printf("Enter the elements:\n");
    for(i = 0; i < sz; i++) {
        scanf("%d", &my_arr[i]);
    }

    do {
        printf("\n--- Array Operations ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Current Array: ");
            for(i = 0; i < sz; i++) {
                printf("%d ", my_arr[i]);
            }
            printf("\n");
        }
        else if(choice == 2) {
            printf("Enter position (1 to %d) to insert: ", sz + 1);
            scanf("%d", &pos);
            printf("Enter value: ");
            scanf("%d", &val);
            
            for(i = sz; i >= pos; i--) {
                my_arr[i] = my_arr[i - 1];
            }
            my_arr[pos - 1] = val; // Insert
            sz++; // Increase size
            printf("-> Element inserted!\n");
        }
        else if(choice == 3) {
            printf("Enter position (1 to %d) to delete: ", sz);
            scanf("%d", &pos);
            
            for(i = pos - 1; i < sz - 1; i++) {
                my_arr[i] = my_arr[i + 1];
            }
            sz--; // Decrease size
            printf("-> Element deleted!\n");
        }
        else if(choice == 4) {
            printf("Exiting...\n");
        }
        else {
            printf("Invalid selection.\n");
        }
    } while(choice != 4);

    return 0;
}