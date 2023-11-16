#include <stdio.h>
int main() {
    int current_number=0, pre_number, i, sum;
    for (i=0;i<=9;i++) {
        if (current_number==0) {
            pre_number=0;
        }
        else {
            pre_number=current_number-1;
        }
        sum=pre_number+current_number;
        printf("Current Number %d Previous Number %d sum : %d\n",current_number,pre_number,sum);
        current_number+=1;
        }
    return 0;
}