//write a program to check if a number is prime//

#include<stdio.h>
int main(){
    int n,i,isprime = 1;
    printf("enter the numbe n:");
    scanf("%d",&n);

    if(n<=1){
        printf("not prime");
        return 0;
    }
    for (i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime)
    printf("prime");
    else
    printf("not prime");

    return 0;
}
