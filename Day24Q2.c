//write the program to print the following pattern//

#include<stdio.h>
int main(){
    int i,j,n;

    n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);

        }
        printf("\n");
    }

    return 0;


}
