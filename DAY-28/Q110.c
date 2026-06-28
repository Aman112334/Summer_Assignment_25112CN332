#include <stdio.h>

struct BankAcc {
    int acc_num;
    char acc_holder[50];
    float balance;
};

int main() {
    struct BankAcc my_acc;
    int sel;
    float val;

    printf("--- Bank Account Setup ---\n");
    printf("Enter Account Number: ");
    scanf("%d", &my_acc.acc_num);
    
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]s", my_acc.acc_holder);
    
    my_acc.balance = 0.0; 
    printf("-> Account Created Successfully!\n");

    do {
        printf("\n--- Bank Operations ---\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &sel);

        switch(sel) {
            case 1:
                printf("Enter amount to deposit: Rs ");
                scanf("%f", &val);
                if(val > 0) {
                    my_acc.balance = my_acc.balance + val;
                    printf("-> Deposit successful!\n");
                } else {
                    printf("-> Invalid amount!\n");
                }
                break;
                
            case 2:
                printf("Enter amount to withdraw: Rs ");
                scanf("%f", &val);
                if(val <= my_acc.balance && val > 0) {
                    my_acc.balance = my_acc.balance - val;
                    printf("-> Withdrawal successful! Please collect cash.\n");
                } else {
                    printf("-> Insufficient balance or invalid amount!\n");
                }
                break;
                
            case 3:
                printf("\n--- Account Details ---\n");
                printf("Name   : %s\n", my_acc.acc_holder);
                printf("Acc No : %d\n", my_acc.acc_num);
                printf("Balance: Rs %.2f\n", my_acc.balance);
                break;
                
            case 4:
                printf("Thank you for banking with us.\n");
                break;
                
            default:
                printf("Invalid option selected.\n");
        }
    } while(sel != 4);

    return 0;
}