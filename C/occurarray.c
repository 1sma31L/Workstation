#include <stdio.h>
void main() {
    int i,n,j,similar,occurence=0;
    printf("Input the number of Elementss to be stored in the array : ");
    scanf("%d",&n);
    int array[n];
    printf("Input %d Elementss in the array : \n",n);  
    for(i=1; i<=n; i++)  
    {  
	    printf("Elements - %d : ",i);
        scanf("%d", &array[i]);
    }  
    printf("\nElementss in array are : {");  
    for(i=1; i<=n; i++)  
    {  
        printf("%d", array[i]);
        if (i < n) 
        {
            printf(","); 
        }            
    }
    printf("}\n");

// * Searching loop
// ? how to solve this shit

    int k,found, checked[n];
    for (i=1; i<=n; i++)
    {
        // Cheking function 
        for (int k=1; k<=n; k++) 
        {
            if (array[i] == checked[k]) 
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            for (j=1; j<=n; j++)
            {
                if (array[i]==array[j])
                {
                   similar=array[i];
                   occurence++;
                   checked[i]=similar;
                }
            }
            printf("%d has occured %d times\n",similar,occurence);
            occurence=0;
        }
        found=0;
    }
} 
