//write a program to input time in seconds and convert it to hours:minutes:seconds format//

#include<stdio.h>

int main(){
    int total_seconds;
     int h, mins,seconds;

     printf("enter the total seconds");
     scanf("%d",&total_seconds);

     h=total_seconds/3600;
     total_seconds=total_seconds%3600;

     mins= total_seconds/60;
     seconds= total_seconds%60;

     printf("%d:%d:%d\n",h,mins,seconds);

     return 0;

}