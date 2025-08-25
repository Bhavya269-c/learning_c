#include<stdio.h>4

int main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
     
    int sum=a+b;
    int diff= a-b;
    int product= a*b;
    int quotient = a/b;

    printf("sum=%d,diff=%d,product=%d,quotient=%d\n",sum,diff,product,quotient);

    return 0;

}
