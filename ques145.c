//Return a structure containing top student's details from a function.//

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];   // return the structure
}

int main() {
    int n = 3;
    struct Student s[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %.0f",
           top.name, top.roll, top.marks);

    return 0;
}
