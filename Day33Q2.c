//insert an element in a sorted array at the appropriate position//

#include<stdio.h>

int main(){
    int n;
    printf("enter the number n:");
    scanf("%d",&n);

    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }

    int key;
    scanf("%d",&key);

    int i;
    for(i=n-1;(i>=0 &&arr[i]>key);i--){
       arr[i+1]=arr[i];
    }
        arr[i+1] = key;

        n++;

        for(i=0;i<n;i++){
            printf("%d",arr[i]);
        }
        printf("\n");

        return 0;
    }
