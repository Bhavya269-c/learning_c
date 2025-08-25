//write a program to calculate the area and perimeter of rectangle given its length and breadth\\

#include<stdio.h>

int main(){
    int l,b, area , perimeter;
    printf("enter l and b");
    scanf("%d%d",&l,&b);

    area=l*b;
    perimeter=2*(l+b);

    printf("area=%d,perimeter=%d\n",area,perimeter);
    
    return 0;
}