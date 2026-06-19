#include <stdio.h>

int main() {
    int arr[100], n, target, count = 0;

    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("The element %d appears %d time(s) in the array.\n", target, count);

    return 0;
}