//write a program to find the HCF (GCD) of two number//

#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);

    while(b !=0){
        int temp =b;
        b = a%b;
        a = temp;
    }

    printf("%d",a);
    return 0;
}