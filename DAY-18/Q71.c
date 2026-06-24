#include <stdio.h>

int main() {
    int arr[100], n, key;
    int low, high, mid;
    int found = 0;

    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements in SORTED ASCENDING ORDER:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("\nElement %d found at index %d (Position %d).\n", key, mid, mid + 1);
            found = 1;
            break; 
        } 
        else if (arr[mid] < key) {
            low = mid + 1;
        } 
        else {
       
            high = mid - 1;
        }
    }

    if (!found) {
        printf("\nElement %d is not present in the array.\n", key);
    }

    return 0;
}