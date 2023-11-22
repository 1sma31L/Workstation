//  EXO5
#include <stdio.h>
void main(){
    int i,n;
    printf("Entre a postive number : ");
    scanf("%d",&n);
    printf("les nombre pair entre %d and 0 are : \n",n);
    while(n!=0)
    {
        if (n%2==0){
            printf("%d ",n);
        }
        n--; 
    }
    printf("\n");
}