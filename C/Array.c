#include <stdio.h>  
void  main() {  
    // DEFINING VARIABLES
    int i,n,j;
    // INTRODUCTION AND READ THE NUMBER OF THE ARRAY'S ELLEMNTS
    printf("Input the number of elements to store in the array : ");
    scanf("%d",&n);
    int arr[n];
    // READ THE ARRAY
    printf("Input %d elements in the array : \n",n);  
    for(i=1; i<=n; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
    // SORT THE ARRAY
    printf("\nElements in array are : {");  
    for(i=1; i<=n; i++)  
    {  
        printf("%d", arr[i]);
        if (i < n) 
        {
            printf(","); 
        }            
    } 
    printf("}\n");	
    // REVERSE THE ORDER OF THE ARRAY
    printf("Elements in array in reverse are : {");  
    for (j=n; j>=1; j--)
    {
        printf("%d", arr[j]);
    // DONT PRINT COMMA IF I HAVE ONLY ONE OR TWO ELLEMENTS
        if (j > 1)
        {
            printf(",");
        }
    }
    printf("}\n");
}