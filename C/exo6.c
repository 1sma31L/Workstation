//  EXO6
#include <stdio.h>
void main() {
    int ctr=0,i,n=1,s=0;
    printf("Entre des notes entre 0 et 20 :\n");
    int array[100];
    while(n<=20 && n>=0) {
        scanf("%d",&n);
        array[ctr]=n;
        ctr++;
    }
    printf("\nLes nombre saises sont : {");
    for(i=0;i<ctr-1;i++) {
            printf("%d",array[i]);
            if (i<ctr-2)
            {
                printf(" ,");
            }
        }
    printf("}\n");
    printf("\nle nombre de notes saisaies : %d\n",ctr-1);
}

