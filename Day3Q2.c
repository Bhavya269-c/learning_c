//write a program to swap two numbers using a third variable//

#include<stdio.h>

int main(){
    int a ,b,c;
     
    printf("enter the value of first variable a");
    scanf("%d",&a);
    printf("enter the value of second variable b");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;

    printf("after swap:%d %d\n",a,b);

    return 0;
}
