#include <stdio.h>
void main(){
    int i,n;
    printf("Enter the number of elemnts in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Entre %d elemnts in the array : \n");
    for(i=1;i<=n;i++){
        printf("Entre elemnt number %d in the array : ",i);
        scanf("%d",&array[i]);
    }
    printf("\nElements in array are : {");  
    for(i=1; i<=n; i++)  
    {  
        printf("%d", array[i]);
        if (i < n) 
        {
            printf(","); 
        }            
    } 
    printf("}\n");	
    // summing all the array elements
    int sum=0;
    for(i=1;i<=n;i++){
        sum=sum+array[i];
    }
    printf("Sum of all the elements in the array is : %d\n",sum);
}