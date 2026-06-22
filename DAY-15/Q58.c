#include <stdio.h>

int main() {
    int arr[100], n, d;

    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &d);
    d = d % n;

    
    for (int i = 0; i < d; i++) {
        int temp = arr[0]; 
         for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        
        arr[n - 1] = temp; 
    }

   
    printf("\nArray after Left Rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}