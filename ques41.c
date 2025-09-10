//write a program to swap the first and last digit of a number//

#include<stdio.h>
int main(){
    int num,temp,first,last,middle,swapped,power = 1;

    printf("enter the number:");
    scanf("%d",&num);

    temp = num;

    last = num%10;

    while(temp>=10){
        temp = temp/10;
        power = power*10;
    
    }
    first =temp;
    
    if(power == 1 && num<10){
        printf("%d",num);

        return 0;
    }

    middle = (num%power)/10;

    swapped= last*power+middle*10+first;

    printf("%d",swapped);

    return 0;

}