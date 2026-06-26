#include <stdio.h>

int main() {
    float my_bal = 5000.00; 
    int my_pin = 1234;
    int entered_pin, opt;
    float dep_amt, with_amt;

    printf("Welcome to the Campus ATM\n");
    printf("Please enter your 4-digit PIN: ");
    scanf("%d", &entered_pin);

    // Simple security check
    if(entered_pin != my_pin) {
        printf("Incorrect PIN. Access Denied!\n");
        return 0; // Kill program
    }

    do {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("==============================\n");
        printf("Select an option (1-4): ");
        scanf("%d", &opt);

        switch(opt) {
            case 1:
                printf("\n-> Your current balance is: Rs %.2f\n", my_bal);
                break;
                
            case 2:
                printf("\nEnter amount to deposit: Rs ");
                scanf("%f", &dep_amt);
                if(dep_amt > 0) {
                    my_bal = my_bal + dep_amt;
                    printf("-> Deposit successful. New balance: Rs %.2f\n", my_bal);
                } else {
                    printf("-> Invalid amount!\n");
                }
                break;
                
            case 3:
                printf("\nEnter amount to withdraw: Rs ");
                scanf("%f", &with_amt);
                if(with_amt > my_bal) {
                    printf("-> Insufficient funds!\n");
                } 
                else if(with_amt <= 0) {
                    printf("-> Invalid amount!\n");
                } 
                else {
                    my_bal = my_bal - with_amt;
                    printf("-> Please collect your cash. Remaining balance: Rs %.2f\n", my_bal);
                }
                break;
                
            case 4:
                printf("\nThank you for using our ATM. Have a nice day!\n");
                break;
                
            default:
                printf("\nInvalid option! Please try again.\n");
        }
        
    } while(opt != 4);

    return 0;
}