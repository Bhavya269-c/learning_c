//remove all vowels from a string//

#include<stdio.h>
#include<string.h>

int main(){
    char str[100],result[100];
    int i,j =0;

    printf("enter a string:");
    gets(str);

    for(i=0;str[i] !='\0';i++){
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&
        str[i]!='A'&&str[i]!='E'&&str[i]='I'&&str[i]!='O'&&str[i]!='U'){
            result[j++] =str[i];
        }
    }

    result[j]= '\0';
    printf("output: %s\n",result);
    return 0;
}
