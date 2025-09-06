//write a program to check if a number is an armstrong number//

#include<stdio.h>
#include<math.h>

int main(){
 int n,original,digits =0,sum=0,temp,digit;
 printf("enetr a number n:");
 scanf("%d",&n);

 original=n;
 temp=n;

 while (temp>0){
    digits++;
    temp /=10;
 }
 temp=n;
 while(temp>0){
    digit = temp%10;
    sum +=pow(digit,digits);
    temp /=10;
 }
 if(sum==original)
 printf("armstrong");
 else
 printf("not armstrong");

 return 0;
}