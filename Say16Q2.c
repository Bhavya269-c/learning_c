//write a program to check if a number is a palindrome//

#include<stdio.h>

int main(){
    int n,original,reversed =0,digit;
    printf("enter a number n:");
    scanf("%d", &n);

    original=n;

    while(n>0){
        digit =n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    if(original == reversed)
    printf("palindrome");
    else
    printf("not palindrome");

    return 0;

}
