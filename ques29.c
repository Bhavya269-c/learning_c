//(loops without arrays/strings) write a program to calculate the factorial of a number//

#include<stdio.h>

int main(){
    int n,i;
    long long fact=1;

    printf("enetr a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact*=i;
    }

    printf("factorial of %d is: %lld\n",n,fact);

    return 0;
}