#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, temp1, temp2, remainder, n, result;

    printf("Enter starting number: ");
    scanf("%d", &start);
    
    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        temp1 = i;
        temp2 = i;
        n = 0;
        result = 0;
        while (temp1 != 0) {
            temp1 = temp1 / 10;
            n++;
        }
        while (temp2 != 0) {
            remainder = temp2 % 10;
            result = result + round(pow(remainder, n));
            
            temp2 = temp2 / 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
    }
    
    printf("\n");

    return 0;
}