#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int evenCount = 0;
    int oddCount = 0;

    // 1. Take the size of the array
    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid size! Please enter a value between 1 and 100.\n");
        return 1;
    }

    // 2. Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 3. Traverse the array and count even/odd elements
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++;  
        }
    }

    // 4. Display results
    printf("\n--- Results ---\n");
    printf("Total Even elements = %d\n", evenCount);
    printf("Total Odd elements  = %d\n", oddCount);

    return 0;
}