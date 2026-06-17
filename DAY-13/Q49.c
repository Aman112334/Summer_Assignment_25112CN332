#include <stdio.h>

int main() {

    int arr[100]; 
    int n;
    // 1. Ask the user for the number of elements
    printf("Enter the number of elements you want to store (Max 100): ");
    scanf("%d", &n);
    if (n > 100 || n <= 0) {
        printf("Invalid size! Please enter a number between 1 and 100.\n");
        return 1; 
    }

    // 2. Taking array inputs from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]); 
    }

    // 3. Displaying the stored array elements
    printf("\nThe elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}