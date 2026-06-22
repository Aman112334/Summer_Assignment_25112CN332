#include <stdio.h>

int main() {
    int arr[100], n, targetSum;
    int found = 0; 

    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    printf("\nPairs with the sum %d are:\n", targetSum);
    
  
    for (int i = 0; i < n; i++) {
      
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pairs found that add up to %d.\n", targetSum);
    }

    return 0;
}