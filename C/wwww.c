#include <stdio.h>
int main() {
    int decimal, binary = 0, base = 1;

    printf("Entrez un nombre décimal : ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }

    printf("Le nombre binaire correspondant est : %d\n", binary);

    return 0;
}