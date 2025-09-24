//find the second largest element in an array//
#include<stdio.h>

int main(){
    int n,i;
    printf("enter the number n:");
    scanf("%d".&n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }

    int first = -1e9,second = -1e9;

    for(i=0;i<n;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second &&arr[i]<first){
            second = arr[i];
        }
    }

    if(second == -1e9){
        printf("no second largest element\n");
    }
    else{
        printf("%d\n",second);
    }


}
