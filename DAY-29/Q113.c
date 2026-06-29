#include <stdio.h>

int main() {
    int op;
    float n1, n2, res;

    do {
        printf("\n--- Basic Calculator ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Select an operation: ");
        scanf("%d", &op);

        if(op >= 1 && op <= 4) {
            printf("Enter first number: ");
            scanf("%f", &n1);
            printf("Enter second number: ");
            scanf("%f", &n2);
        }

        switch(op) {
            case 1:
                res = n1 + n2;
                printf("-> Result: %.2f\n", res);
                break;
            case 2:
                res = n1 - n2;
                printf("-> Result: %.2f\n", res);
                break;
            case 3:
                res = n1 * n2;
                printf("-> Result: %.2f\n", res);
                break;
            case 4:
                if(n2 == 0) {
                    printf("-> Error! Division by zero is not allowed.\n");
                } else {
                    res = n1 / n2;
                    printf("-> Result: %.2f\n", res);
                }
                break;
            case 5:
                printf("Turning off calculator...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(op != 5);

    return 0;
}
