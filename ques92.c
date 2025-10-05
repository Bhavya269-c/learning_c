//find the repeating lowercase alphabet in a string//

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int freq[26] ={0};
    int i,index;
    char result='\0';

    printf("enter a string: ");
    gets(str);

    for(i=0;str[i] !='\0',i++){
        if(str[i]>='a'&&str[i] <='z'){
            index = str[i]-'a';
            freq[index]++;
            if(freq[index] == 2){

                result = str[i];
                break;
            }
        }
    }

    if(result !='\0')
    printf("output: %c\n",result);
    else
    printf("output: No repeating lowercase alphabet\n");

    return 0;

}
