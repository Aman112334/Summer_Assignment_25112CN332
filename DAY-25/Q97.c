#include <stdio.h>

int main() {
    int a[50], b[50], res[100];
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter number of elements for 1st sorted array: ");
    scanf("%d", &n1);
    printf("Enter %d sorted elements:\n", n1);
    for(int x = 0; x < n1; x++) {
        scanf("%d", &a[x]);
    }

    printf("Enter number of elements for 2nd sorted array: ");
    scanf("%d", &n2);
    printf("Enter %d sorted elements:\n", n2);
    for(int x = 0; x < n2; x++) {
        scanf("%d", &b[x]);
    }

    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            res[k] = a[i];
            i++;
        } else {
            res[k] = b[j];
            j++;
        }
        k++;
    }
    while(i < n1) {
        res[k] = a[i];
        i++;
        k++;
    }
    while(j < n2) {
        res[k] = b[j];
        j++;
        k++;
    }

    printf("\nMerged Sorted Array:\n");
    for(int x = 0; x < k; x++) {
        printf("%d ", res[x]);
    }
    printf("\n");

    return 0;
}