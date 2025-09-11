//write a program to check if a number is a strong number//

#include<stdio.h>

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int num,temp,digit,sum = 0;

    printf("enter the number:");
    scanf("%d",&num);
    temp =num;

    while(temp>0){
        digit=temp%10;
        sum=sum+factorial(digit);
        temp=temp/10;
    }
    if(sum==num)
    printf("strong number");
    else
    printf("not strong number");

    return 0;
}


