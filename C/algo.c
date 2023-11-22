#include <stdio.h>

int main() {
    int VB, B, D, P2;
    
    printf("Donner un entier en binaire : ");
    
    do {
        scanf("%d", &VB);
    } while (VB < 0);

    B = VB;  
    P2 = 1;  
    D = 0;

    do {
        D = D + (B % 10) * P2;
        P2 = 2 * P2;  
        B = B / 10;
    } while (B != 0);

    printf("La valeur décimale de %d est : %d\n", VB, D);

    return 0;
}
