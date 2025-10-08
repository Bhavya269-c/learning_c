//print the initials of a name with the surname displayed in full//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, len, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

    
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && i != lastSpace && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c.", toupper(name[i + 1]));
        }
    }

    if (lastSpace != -1)
        printf(" %s", &name[lastSpace + 1]);

    return 0;
}