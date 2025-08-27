//Write a program to input a character and check whether it is a vowel or consonant using if–else//

#include<stdio.h>

int main(){
    char ch;

    printf("enter a character:");
    scanf("%c",&ch);

    if (ch == 'a'|| ch =='e'|| ch == 'i' || ch == 'o' || ch == 'u'){
        printf(" character is a vowel\n",ch);
    }
    else{
        printf(" character is constant\n",ch);
    }
    return 0;
}

