//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.//

#include <stdio.h>
#include <ctype.h> 

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("Error: text.txt not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);  // convert to lowercase for easy comparison

        if (isalpha(ch)) {  // check if character is alphabetic
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}