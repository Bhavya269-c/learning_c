// write a program to calculate simple and compound interest for given principal, rate,and time//

#include<stdio.h>
#include<math.h>

int main(){
    float principal,r,t;
    float si,ci;

    printf("enter the r and t");
    scanf("%f %f",&r,&t);

    printf("enter the principal");
    scanf("%f",&principal);

    si=(principal*r*t)/100;
    ci=(principal*(pow(1+r/100,t)-1));

    printf("si=%.2f,ci=%.2f\n",si,ci);

    return 0;

}
