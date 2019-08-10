#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct student {
    int age;
    float marks;
    long int id;
};

void entermarks (struct student *stu) {
    printf("Enter Age, Marks, Id of Student \n");
    scanf("%d %f %ld", &stu->age, &stu->marks, &stu->id);
}

void validate (struct student stu) {
    if (stu.age>20 && stu.marks>=0 && stu.marks<=100) {
        if (stu.marks>=65) {
            printf("Student: Data Valid and Qualified for Admission \n");
        } else {
            printf("Student Data Valid but Not Qualified for Admission \n");
            }
    } else {
        printf("Student: Data Invalid \n");
        }
}

void main() {
    struct student stu;
    
    entermarks(&stu);
    validate(stu);

    getch();
}