//write a program to take a number as input and print its equivalent binary representation//

#include<stdio.h>
void tobinary(int n){
    if (n==0)
    return;
    tobinary(n/2);
    printf("%d",n%2);
}
int main(){
    int n;
    printf("enetr the number n:");
    scanf("%d",&n);

    if(n==0)
    printf("0");
    else
    tobinary(n);

    return 0;

}




