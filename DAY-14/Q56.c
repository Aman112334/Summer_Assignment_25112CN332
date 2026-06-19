#include <stdio.h>

int main() {
    int arr[100], visited[100] = {0}; 
    int n, duplicateFound = 0;

    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; 
            }
        }
        if (count > 1) {
            printf("%d (Repeated %d times)\n", arr[i], count);
            duplicateFound = 1;
        }
    }

    if (!duplicateFound) {
        printf("No duplicate elements found in the array.\n");
    }

    return 0;
}