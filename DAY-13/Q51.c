#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int max, min;

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

    // 3. Assume the first element is both the largest and smallest
    max = arr[0];
    min = arr[0];

    // 4. Traverse the array to find actual max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }

    // 5. Display results
    printf("\n--- Results ---\n");
    printf("Largest element  = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}