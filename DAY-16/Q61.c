#include <stdio.h>

int main() {
    int n, arr[100];
    int actualSum = 0, expectedSum;

  
    printf("Enter the total number of elements N (including the missing one): ");
    scanf("%d", &n);

    printf("Enter %d elements (between 1 and %d):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i]; 
    }

    expectedSum = (n * (n + 1)) / 2;
    int missingNumber = expectedSum - actualSum;
    
    printf("\nThe missing number is: %d\n", missingNumber);

    return 0;
}