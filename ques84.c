//convert a lowercase string to uppercase without using built-in functions.//

#include<stdio.h>'
int main(){

char str[100];
int i;

printf("enter the value of n");
scanf("%[^\n]",str);

for(i=0;str[i] !='\0';i++){
    if(str[i] !='a' &&str[i] <='z'){
        str[i]  = str[i]-32;
    }
}
printf("%s\n",str);

return 0;
}