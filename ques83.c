//count vowels and consonants in a string//

#include<stdio.h>
#include<ctype.h>

int main(){
    char str[100];
    int i, vowels = 0,consonants = 0;

    scanf("%[^\n]",str);

    for(i=0;str[i] !='\0';i++){
        char ch = tolower(str[i]);
        if(ch >='a'&&ch<='z'){
            if(ch =='a'|| ch =='e'|| ch =='i'|| ch =='o'||ch =='u')
            vowels++;
            else
            consonants++;
        }
    }
    printf("vowels=%d,consonants=%d\n",vowels,consonants);

    return 0;
}