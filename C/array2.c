#include <stdio.h>
void main() {
    int i,j,n;
    printf("the number of elements to be stored in the array :");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d in this array\n",n);
    for (i = 1; i <= n; i++) {
        printf("Entre element %d : ",i);
        scanf("%d", &a[i]);
    }
    int unique;
    printf("The unique elements found in the array are: ");
    for (i=1;i<=n;i++) {
        unique=1;
        for (j = 1; j <= n; j++) {
            if (i!=j) {
                if (a[i] == a[j]) {
                    unique=0;
                }
            }
        }
        if (unique) {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}