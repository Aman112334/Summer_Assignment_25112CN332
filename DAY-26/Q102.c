#include <stdio.h>

int main() {
    int v_age;
    int rem_years;

    printf("--- Voting Eligibility Checker ---\n");
    printf("Enter your age: ");
    scanf("%d", &v_age);

    if(v_age >= 18) {
        printf("\nYou are eligible to cast your vote!\n");
        printf("Please ensure you have a valid Voter ID.\n");
    } 
    else if(v_age > 0) {
        rem_years = 18 - v_age;
        printf("\nYou are NOT eligible to vote yet.\n");
        printf("You need to wait %d more year(s).\n", rem_years);
    } 
    else {
        printf("\nInvalid age entered! Please enter a valid positive number.\n");
    }

    return 0;
}