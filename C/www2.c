#include <stdio.h>
int main() {
    int D, B = 0, base = 1;

    printf("Entrez un nombre décimal : ");
    scanf("%d", &D);

    while (D > 0) {
        B += (D % 2) * base;
        D /= 2;
        base *= 10;
    }

    printf("Le nombre binaire correspondant est : %d\n", B);

    return 0;
}