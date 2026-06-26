#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_val, user_guess;
    int tries = 0;
    srand(time(NULL));
    
    secret_val = (rand() % 100) + 1; 

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have picked a number between 1 and 100. Try to guess it.\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);
        tries++;

        if(user_guess > secret_val) {
            printf("Too high! Try again.\n\n");
        } 
        else if(user_guess < secret_val) {
            printf("Too low! Try again.\n\n");
        } 
        else {
            printf("\nCongratulations! You guessed it right.\n");
            printf("You took %d attempts.\n", tries);
        }
        
    } while(user_guess != secret_val);

    return 0;
}