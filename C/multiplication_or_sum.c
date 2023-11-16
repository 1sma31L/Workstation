#include <stdio.h>
int multiplication_or_sum(int num1,int num2){
        int product= num1*num2;
        int sum = num1+num2;
        if (product <= 1000) {
            return product;
        }
        else {
            sum = num1+num2;
            return sum;
        }
}
int main() {
    int product, sum, num1, num2, result;

    printf("Entre the First Number : ");scanf("%d",&num1);
    printf("Entre the Second Number : ");scanf("%d",&num2);

    result=multiplication_or_sum(num1,num2);
    printf("The result is : %d \n",result);
    return 0;
}