//write a program to convert temperature from celsius to fahrenheit//

#include<stdio.h>

int main(){
    float c, f;

    printf("enter the temprature in c ");
    scanf("%f",&c);

    f=(c*9/5)+32;

    printf("The temperature in f: %f", f );

    return 0;
}
