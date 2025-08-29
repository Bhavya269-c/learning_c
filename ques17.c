//write a program to find the roots of a quadractic equation and cayegorize them//

#include<stdio.h>

int main(){
    float a,b,c,d,root1,root2,realpart,imagPart;

    printf("enter the coffecient a,b and c:");
    scanf("%f %f %f",&a, &b, &c);

    d=b*b-4*a*c;

    if(d>0){
        root1 =(-b+sqrt(d))/(2*a);
        root2 =(-b-sqrt(d))/(2*a);printf("roots are real and different: %.0f,%.0f\n",root1,root2);
    }
    else if(d==0){
        root1=-b/(2.0*a);
        printf("roots are real and same:%.0f\n",root1);
    }
    else{
        printf("roots are complex\n");
    }
    return 0;
}