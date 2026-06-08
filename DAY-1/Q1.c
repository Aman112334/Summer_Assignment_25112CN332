#include <stdio.h>
int main() {
    int n,sum,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sum = 0;
    for(i=1;i<=n;i++) {
        sum += i;
    }
    printf("The sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}
