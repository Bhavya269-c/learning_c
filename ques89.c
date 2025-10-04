// count frequency of a given character in a string//

#include<stdio.h>

int main(){
char str[100],ch;
int i,count = 0;

printf("enter a character to find frequency: ");
gets(str);

printf("enter a character to find frequency :");
scanf("%c",&ch);

for(i=0;str[i] !='\0';i++){
    if(str[i] == ch){
        count++;
    }
}

printf("frequency of %c =%d ",ch,count);

return 0;
}