//print the initials of a name//

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ') {
            printf("%c.", toupper(name[i+1]));
        }
    }

    return 0;
}