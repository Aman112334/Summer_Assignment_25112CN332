#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n;
    int max, secondMax;

    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Invalid input! You need at least 2 elements to find the second largest.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    secondMax = INT_MIN; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        printf("There is no second largest element (all elements are identical).\n");
    } else {
        printf("The largest element is: %d\n", max);
        printf("The second largest element is: %d\n", secondMax);
    }

    return 0;
}