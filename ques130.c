//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.//

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file for writing!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);
    printf("\nRecords saved successfully in students.txt!\n\n");


    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading!\n");
        return 1;
    }

    printf("Displaying student records:\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}