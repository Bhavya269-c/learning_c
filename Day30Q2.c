//count positive ,negative, and zero elements in an array//

#include<stdio.h>

int main(){
    int n;
    printf("enter the number n:");
    scannf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int positive =0,negative =0, zero =0;

    for(int i=0;i<n;i++){
        if(arr[i]>0)
        positive++;
        else if(arr[i]<0)
        negative++;
        else
        zero++;
    }

    printf("positive=%d,negative=%d,zero=%d\n", positive,negative,zero);
    return 0;

}
