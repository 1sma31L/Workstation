//Debut Algorithme of divisions without division: 
#include <stdio.h>
void main() {
    int e1,e2,i,quotient=0,reste,check=0;
    printf("Enter Two integer numbers:");
    scanf("%d%d",&e1,&e2);
    if (e2>e1 || e1<0 || e2<=0) {
    printf("Error Try Agian With valid Numbers \n ");
    }
    else {
    while (check==0) {
        if (e1>e2) {
            quotient=quotient+1;
            reste=e1-e2;
            e1=reste;
        }
        else if (e1==e2) {
            quotient=quotient+1;
            reste=0;
            check=1;
        }
        else if (e1<e2) {
            check=1;
            }
        }
    printf("Le quotient de la division est : %d\net le reste est : %d \n",quotient,reste);
    }
}
//Fin.

    