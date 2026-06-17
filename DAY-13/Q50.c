#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int sum = 0;
    float average;

    // 1. Take the size of the array
    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid size! Please enter a value between 1 and 100.\n");
        return 1;
    }

    // 2. Input elements and calculate sum simultaneously
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        sum += arr[i]; 
    }

    // 3. Calculate average
    average = (float)sum / n;

    // 4. Display results
    printf("\n--- Results ---\n");
    printf("Sum of elements     = %d\n", sum);
    printf("Average of elements = %f\n", average); 

    return 0;
}