#include <stdio.h>

int main() {
    int arr[100], n;
    int maxCount = 0;
    int mostFrequent = -1;

    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n; i++) {
        int currentCount = 1; 
        
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                currentCount++;
            }
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequent = arr[i];
        }
    }

    printf("\nThe maximum frequency element is %d, which appears %d times.\n", mostFrequent, maxCount);

    return 0;
}