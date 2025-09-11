//write a program to find the sum of the series: 1+3/4+5/6+7/8+... up to n terms//

#include<stdio.h>

int main(){
    int n,i;
    float sum=0.0;

    printf("enter number of terms:");
    scanf("%d",&n);

    int numerator =1, denominator =2;

    for(i=1;i<=n;i++){
        sum=sum+(float)numerator/denominator;
        numerator +=2;
        denominator +=2;
    }
    printf("approximate sum:%.1f",sum);

    return 0;
}