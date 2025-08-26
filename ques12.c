// write a program to input an integer and check whether it is positive , negative or zero using nested if-else//

#include<stdio.h>

int main(){
    int num;

    printf("enetr an integer:");
    scanf("%d",&num);

    if(num>0){
        printf("the num is positive\n");
    }
    else if(num<0){
        printf("the num is negative\n");
    }
    else{
        printf("zero\n");
    }

    return 0;
    }
