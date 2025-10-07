//reverse each word in a sentence without changing the order//

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    char *word_start = str;
    char *temp = str;
    
    while (*temp) {
        if (*temp == ' ') {
            reverseWord(word_start, temp - 1);
            word_start = temp + 1;
        }
        temp++;
    }
    
    reverseWord(word_start, temp - 1);
    
    printf("%s", str);
    
    return 0;
}


