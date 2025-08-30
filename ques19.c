//write a program to classify a triangle as equilateral,isosceles,or scalene based on its side lengths//

#include<stdio.h>

int main(){
    int a,b,c;

    printf("enter three sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);

     if(a+b>c&&a+c>b&&b+c>a){
        if(a==b&& b==c){
            printf("equilateral\n");
        }
        else if(a==b || b==c || a==c){
            printf("isosceles\n");
        }
        else{
            printf("scalene\n");
        }
     }
     else{
        printf("not a valid triangle\n");
     }
     return 0;
}

