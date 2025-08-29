//write a program to assign grades based on a percentage input//

#include<stdio.h>

int main(){
 int percent;

 printf("enter perecentage:");
 scanf("%d",&percent);

 if(percent>=90){
    printf("grade A\n");
 }
 else if(percent>=80){
    printf("grade B\n");
 }
 else if(percent>=70){
    printf("grade C\n");
 }
 else if(percent>=60){
    printf("grade D\n");
 }
 else{
    printf("grade F\n");
 }

 return 0;

}
