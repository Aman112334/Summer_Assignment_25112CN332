#include <stdio.h>

int main() {
    int max_seats = 100;
    int booked_seats = 0;
    int avail_seats;
    int choice, req;

    while(1) {
    
        avail_seats = max_seats - booked_seats;

        printf("\n--- Ticket Booking System ---\n");
        printf("1. Check Availability\n");
        printf("2. Book Tickets\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("-> Available seats: %d / %d\n", avail_seats, max_seats);
        } 
        else if(choice == 2) {
            printf("Enter number of tickets to book: ");
            scanf("%d", &req);

            if(req <= 0) {
                printf("-> Invalid ticket count!\n");
            }
            else if(req > avail_seats) {
                printf("-> Sorry, only %d seats are available.\n", avail_seats);
            }
            else {
               
                booked_seats = booked_seats + req;
                printf("-> Successfully booked %d tickets!\n", req);
            }
        }
        else if(choice == 3) {
            printf("Exiting system...\n");
            break;
        }
        else {
            printf("-> Wrong input. Select 1, 2, or 3.\n");
        }
    }
    
    return 0;
}