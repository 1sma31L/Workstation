#include <stdio.h>
enum id {hello=0,world};
void main(){
    enum id x;
    printf("Entre 0 or 1 : ");
    scanf("%d",&x);
    if (x==1){
        printf("x is %d\n",x);
    }
    else {
        printf("x is %d\n",x);
    }
}