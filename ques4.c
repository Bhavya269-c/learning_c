//write a program to calculate the area and circumference of a circle given its radius//

#include<stdio.h>

int main(){
    float r, area ,circumference;

    printf("enter the r");
    scanf("%f",&r);
    
    area = 3.14* r *r;
    circumference = 2*3.14*r;

    printf("area=%2f,circumference=%2f\n",area ,circumference);

    return 0;

}
