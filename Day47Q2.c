//find the longest word in a sentence//

#include<stdio.h>
#include<string.h>

int main(){
    char str[200];
    char word[50],longest[50];
    int i = 0,j = 0,maxlen = 0,len;

    gets(str);

    for(i=0;;i++){
        if(str[i] !=''&&str[i] !='\0'){
            word[j++] = str[i];
        
        }else{
            word[j] = '\0';
            len =  strlen(word);

            if(len>maxlen){
                maxlen=len;
                strcpy(longest, word);
            }
            j=0;
        }

        if(str[i] == '\0')
        break;
    }
    printf("%s",longest);
    return 0;
}
