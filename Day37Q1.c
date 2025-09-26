//find the sum of each row of a marix and store it in an array//

#include<stdio.h>

int main(){
    int m,n;
    printf("enter the number n:");
    scanf("%d %d",&m,&n);

    int matrix[m][n],rowSum[m];

    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for (int i=0;i<m;i++){
        printf("%d",rowSum[i]);
    }
    return 0;
}
