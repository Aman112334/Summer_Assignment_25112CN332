#include <stdio.h>

int main() {
    int arr[100], n, d;

    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &d);

    d = d % n;
    for (int i = 0; i < d; i++) {
        int temp = arr[n - 1]; 
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        
        arr[0] = temp; 
    }

    printf("\nArray after Right Rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}