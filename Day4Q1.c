//write a program to swap two numbers without using a third variable//

#include<stdio.h>

int main(){
    int a,b;
    printf("enter the value of two variable:");
    scanf("%d %d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swap:%d%d\n",a,b);

    return 0;


}
