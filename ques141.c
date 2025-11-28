//Define a structure Student with name, roll_no, and marks, then read and print one student's data.//

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    scanf("Name: %s", s.name);
    scanf(" Roll: %d", &s.roll_no);
    scanf(" Marks: %f", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %.0f", s.name, s.roll_no, s.marks);

    return 0;
}
