//write a program to find profit or loss percentage given cost price and selling price//

#include<stdio.h>
int main(){
    float cp,sp,profit,loss,percent;

    printf("enter cost price and selling price:");
    scanf("%f %f",&cp ,&sp);

    if(sp>cp){
        profit =sp-cp;
        percent=(profit/cp)*100;
        printf("profit %.0f%%\n",percent);
    }
    else if(cp>sp){
        loss=cp-sp;
        percent=(loss/cp)*100;
        printf("loss %.0f%%\n",percent);
    }
    else{
        printf("no profit no loss\n");
    }
    return 0;
}