//toggle case of each character in a string//

#include<stdio.h>

int main(){
    char str[100];
    int i;

    printf("enter a string:");
    gets(str);

    for(i=0;str[i] != '\0';i++){
        if(str[i] >= 'a'&&str[i] <= 'z'){
            str[i] = str[i]-32;
        }
        else if(str[i]>='A' &&str[i] <='z'){
            str[i] = str[i]-32;
        }
    }
    printf("toggled string: %s",str);

    return 0;
}
