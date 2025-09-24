//rotate an array to the right by k position//

#include<stdio.h>
int main(){
    int n,k,i;
    printf("enter the number n");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    scanf("%d",&k);

    k=k %n;

    int rotated[n];

    for(i=0;i<k;i++){
        rotated[i] = arr[n-k+i];
    }

    for(i=0;i<n-k;i++){
        rotated[k+i]=arr[i];
    }
    for(i=0;i<n;i++){
        printf("%d",rotated[i]);
    }

    return o;

}
