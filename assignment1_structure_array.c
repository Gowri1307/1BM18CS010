#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct student {
    int age;
    float marks;
    long int id;
};

void main() {
    int strength,i;
    struct student stu[50];

    printf("Enter Number of Students \n");
    scanf("%d", &strength);

    for (i=0;i<strength;++i) {
        printf("Enter Age, Marks, Id of Student %d \n", i+1);
        scanf("%d %f %ld", &stu[i].age, &stu[i].marks, &stu[i].id);
    }
    
    for (i=0;i<strength;++i){
        if (stu[i].age>20 && stu[i].marks>=0 && stu[i].marks<=100) {
            if (stu[i].marks>=65) {
                printf("Student %d: Data Valid and Qualified for Admission \n", i+1);
            } else {
                printf("Student %d: Data Valid but Not Qualified for Admission \n", i+1);
                }
        } else {
            printf("Student %d: Data Invalid \n", i+1);
            }
    }

    getch();
}
