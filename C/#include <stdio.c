#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter %d elements in this array\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Find unique elements
    int unique[n], t = 0;  // Initialize t to 0
    for (i = 0; i < n; i++) {
        int isUnique = 1;  // Assume a[i] is unique
        for (j = 0; j < t; j++) {
            if (a[i] == unique[j]) {
                isUnique = 0;  // a[i] is not unique
                break;
            }
        }
        if (isUnique) {
            unique[t] = a[i];
            t++;
        }
    }

    printf("The unique elements found in the array are: ");
    for (i = 0; i < t; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
