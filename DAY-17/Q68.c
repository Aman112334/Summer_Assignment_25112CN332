#include <stdio.h>

int main() {
    int arr1[100], arr2[100];
    int n1, n2;
    int foundCommon = 0;

    printf("Enter number of elements for Array 1: ");
    scanf("%d", &n1);
    printf("Enter elements of Array 1:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements for Array 2: ");
    scanf("%d", &n2);
    printf("Enter elements of Array 2:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("\nCommon elements between the two arrays are:\n");

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                foundCommon = 1;
                arr2[j] = -999999; 
                break;
            }
        }
    }

    if (!foundCommon) {
        printf("None.");
    }
    printf("\n");

    return 0;
}