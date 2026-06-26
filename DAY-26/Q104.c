#include <stdio.h>

int main() {
    int total_pts = 0;
    char choice;

    printf("========================================\n");
    printf("        C PROGRAMMING MINI QUIZ         \n");
    printf("========================================\n\n");

    // Question 1
    printf("Q1. Who is known as the father of C language?\n");
    printf("A. Bjarne Stroustrup\n");
    printf("B. Dennis Ritchie\n");
    printf("C. James Gosling\n");
    printf("D. Guido van Rossum\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &choice); 
    
    if(choice == 'B' || choice == 'b') {
        printf("Correct!\n\n");
        total_pts++;
    } else {
        printf("Wrong! The correct answer is B. Dennis Ritchie.\n\n");
    }

    printf("Q2. Which symbol is used for logical AND in C?\n");
    printf("A. &\n");
    printf("B. &&\n");
    printf("C. ||\n");
    printf("D. !\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &choice);
    
    if(choice == 'B' || choice == 'b') {
        printf("Correct!\n\n");
        total_pts++;
    } else {
        printf("Wrong! The correct answer is B. &&.\n\n");
    }

    // Question 3
    printf("Q3. What is the size of an 'int' data type on a 32-bit system?\n");
    printf("A. 2 bytes\n");
    printf("B. 4 bytes\n");
    printf("C. 8 bytes\n");
    printf("D. Depends on the compiler\n");
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &choice);
    
    if(choice == 'B' || choice == 'b') {
        printf("Correct!\n\n");
        total_pts++;
    } else {
        printf("Wrong! The correct answer is B. 4 bytes.\n\n");
    }

    printf("========================================\n");
    printf("Quiz Over! Your total score is: %d / 3\n", total_pts);
    
    if(total_pts == 3) {
        printf("Excellent performance!\n");
    } else if(total_pts == 2) {
        printf("Good job!\n");
    } else {
        printf("You need to study more.\n");
    }
    printf("========================================\n");

    return 0;
}