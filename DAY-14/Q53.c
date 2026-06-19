#include <stdio.h>

int main() {
    int arr[100], n, key, found = 0;

    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d (Position %d).\n", key, i, i + 1);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Element %d is not present in the array.\n", key);
    }

    return 0;
}