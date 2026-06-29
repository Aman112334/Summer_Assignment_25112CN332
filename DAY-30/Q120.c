#include <stdio.h>
int total_accs = 0; 

// Function Prototypes
void createAcc(int accs[], char h_names[][50], float bals[]);
void viewAccs(int accs[], char h_names[][50], float bals[]);

int main() {
    
    int acc_numbers[100];
    float balances[100];
  
    char holder_names[100][50]; 
    int opt;

    do {
        printf("\n========== GLOBAL BANK SYSTEM ==========\n");
        printf("1. Create New Account\n");
        printf("2. View All Accounts\n");
        printf("3. Exit System\n");
        printf("========================================\n");
        printf("Choose an action: ");
        scanf("%d", &opt);

        switch(opt) {
            case 1:
                // Passing arrays to the function
                createAcc(acc_numbers, holder_names, balances);
                break;
            case 2:
                // Passing arrays to the function
                viewAccs(acc_numbers, holder_names, balances);
                break;
            case 3:
                printf("Shutting down servers. Goodbye!\n");
                break;
            default:
                printf("Invalid action selected.\n");
        }
    } while(opt != 3);

    return 0;
}

// Function to add data into the arrays
void createAcc(int accs[], char h_names[][50], float bals[]) {
    printf("\nEnter Account Number: ");
    scanf("%d", &accs[total_accs]);
    
    printf("Enter Full Name: ");
    scanf(" %[^\n]s", h_names[total_accs]);
    
    printf("Enter Initial Deposit: Rs ");
    scanf("%f", &bals[total_accs]);
    
    total_accs++; // Increment the global counter
    printf("-> Account Successfully Created!\n");
}

void viewAccs(int accs[], char h_names[][50], float bals[]) {
    if(total_accs == 0) {
        printf("\n-> No accounts exist in the database yet.\n");
        return;
    }
    
    printf("\nAcc No\tHolder Name\t\tBalance\n");
    printf("--------------------------------------------------\n");
    for(int i = 0; i < total_accs; i++) {
        printf("%d\t%s\t\tRs %.2f\n", accs[i], h_names[i], bals[i]);
    }
}