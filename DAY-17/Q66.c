#include <stdio.h>

int main() {
    int arr1[100], arr2[100], unionArr[200];
    int n1, n2, k = 0;

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

    for (int i = 0; i < n1; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr1[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArr[k] = arr1[i];
            k++;
        }
    }
    for (int i = 0; i < n2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr2[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArr[k] = arr2[i];
            k++;
        }
    }

    printf("\nUnion of Arrays:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}