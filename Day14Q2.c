//write a program to print the product of the even numbers from 1 to n//

#include<stdio.h>
int main(){
    int n,i;
    long long product =1;

    printf("enter a number:");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2){
        product*=i;
    }
    printf("product of even numbers from 1 to %d is: %lld\n",n,product);

    return 0;
}
