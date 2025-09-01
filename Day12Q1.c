//write a program to calculate a library fine based on late days//

#include<stdio.h>
int main(){
int days;
printf("enter the number of late days:");
scanf("%d",&days);

 if (days<=5){
    printf("fine ruppee %d\n",days*2);
 }
 else if(days<=10){
    printf("fine ruppee %d\n",days*4);
 }
 else if(days<=30){
    printf("fine ruppee %d\n",days*6);
 }
 else{
    printf("membership cancelled\n");
 }
 return 0;

}
