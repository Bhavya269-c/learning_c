//write a program to input a character and check whetehr it is an uppercase alphabet, lowercase alphabet, digit , or a special ccharcater//

#include<stdio.h>

int main(){
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);

    if (ch>='A'&&ch<='Z'){
        printf("uppercase alphabet\n");
    }
    else if(ch>='a'&&ch<='z'){
        printf("lowercase alphabet\n");
    }
    else if(ch>='0'&&ch<='9'){
        printf("digit\n");
    }
    else{
        printf("special character\n");
    }

    return 0;

}