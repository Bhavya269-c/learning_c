//change the date format dd/04/yyyy to dd-apr-yyyy//

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    scanf("%s", date);

    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    if (strcmp(month, "01") == 0)
        printf("%s-Jan-%s", day, year);
    else if (strcmp(month, "02") == 0)
        printf("%s-Feb-%s", day, year);
    else if (strcmp(month, "03") == 0)
        printf("%s-Mar-%s", day, year);
    else if (strcmp(month, "04") == 0)
        printf("%s-Apr-%s", day, year);
    else if (strcmp(month, "05") == 0)
        printf("%s-May-%s", day, year);
    else if (strcmp(month, "06") == 0)
        printf("%s-Jun-%s", day, year);
    else if (strcmp(month, "07") == 0)
        printf("%s-Jul-%s", day, year);
    else if (strcmp(month, "08") == 0)
        printf("%s-Aug-%s", day, year);
    else if (strcmp(month, "09") == 0)
        printf("%s-Sep-%s", day, year);
    else if (strcmp(month, "10") == 0)
        printf("%s-Oct-%s", day, year);
    else if (strcmp(month, "11") == 0)
        printf("%s-Nov-%s", day, year);
    else if (strcmp(month, "12") == 0)
        printf("%s-Dec-%s", day, year);
    else
        printf("Invalid month");

    return 0;
}
