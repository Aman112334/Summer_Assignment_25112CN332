#include <stdio.h>

int main() {
    int arr1[100], arr2[100], interArr[100];
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
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                int isDuplicate = 0;
                for (int x = 0; x < k; x++) {
                    if (arr1[i] == interArr[x]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                
                if (!isDuplicate) {
                    interArr[k] = arr1[i];
                    k++;
                }
                break; 
            }
        }
    }

    printf("\nIntersection of Arrays:\n");
    if (k == 0) {
        printf("No intersecting elements.\n");
    } else {
        for (int i = 0; i < k; i++) {
            printf("%d ", interArr[i]);
        }
        printf("\n");
    }

    return 0;
}