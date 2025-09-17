//write a program to print all the prime numbers from 1 to n//

#include<stdio.h>
int main(){
    int n,i,j,isprime;

    printf("enter the number n :");
    scanf("%d",&n);

    for(i=2;i<=n;i++){
        isprime=1;

        for(j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            printf("%d",i);
        }
    }
    return 0;
}