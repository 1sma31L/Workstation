#include <stdio.h>
void main() {
    int j=1 ,i=1,row,coloumns,result;
    printf("Entre your number of rows from 1 - to your number : ");
    scanf("%d",&row);
    printf("Entre your number of columns from 1 - to your number : ");
    scanf("%d",&coloumns);
    while (i<=coloumns){
        for (j=1;j<=row;j++){
            result=j*i;
            printf("%d X %d = %d\t",i,j,result );
            }
    printf("\n");
    i++;}
}