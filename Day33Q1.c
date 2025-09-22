// search in a sorted array using binary search//

#include<stdio.h>

int binary search(int arr[],int n,int key){
    int low=0,high=n-1;

    while(low<=high){
        int mid=(low +high)/2;

        if(arr[mid]==key){
            eturn mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high =mid-1;
        }
    }
    return-1;
}

int main(){
    int n;
    printf("enter the number n:");
    scanf("%d",&arr[i]);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    


int key;
scanf("%d",&key);

int result = binarysearch(arr,n,key);

if(result!=-1)
printf("found at index %d\n",result);
else
printf("-1\n");

return 0;
}
