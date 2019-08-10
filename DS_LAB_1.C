#include <stdio.h>
#include <conio.h>

int grade (float mark);

struct marks {
	float ds, coa, ld, cipe, mp, dm, java, project;
};

void entermarks (struct marks *student1) {
	printf("Enter Marks for DS, COA, LD, CIPE, MP, DM, JAVA, Project Respectively \n");
	scanf("%f", &student1->ds);
	scanf("%f", &student1->coa);
	scanf("%f", &student1->ld);
	scanf("%f", &student1->cipe);
	scanf("%f", &student1->mp);
	scanf("%f", &student1->dm);
	scanf("%f", &student1->java);
	scanf("%f", &student1->project);
	printf("The marks of the student are \n");
	printf("DS: %f \n",student1->ds);
	printf("COA: %f \n", student1->coa);
	printf("LD: %f \n", student1->ld);
	printf("CIPE: %f \n", student1->cipe);
	printf("MP: %f \n", student1->mp);
	printf("DM: %f \n", student1->dm);
	printf("JAVA: %f \n", student1->java);
	printf("PROJECT: %f \n", student1->project);
}

void calculatesgpa (struct marks student1) {
	int dsgrade = grade(student1.ds);
	int coagrade = grade(student1.coa);
	int ldgrade = grade(student1.ld);
	int cipegrade = grade(student1.cipe);
	int dmgrade = grade(student1.dm);
	int javagrade = grade(student1.java);
	int projectgrade = grade(student1.project);
	int mpgrade = grade(student1.mp);
	float sgpa = (float) ((dsgrade*4) + (coagrade*3) + (ldgrade*3) + (cipegrade*1) + (dmgrade*4) + (javagrade*4) + (projectgrade*2) + (mpgrade*4))/25;
	printf("Students SGPA is: %f \n", sgpa);
}

int grade (float mark) {
	if (mark >= 90)
	return 10;
	else if (mark >= 75 && mark < 90)
	return 9;
	else if (mark >= 60 && mark < 75)
	return 8;
	else if (mark >= 50 && mark < 60)
	return 7;
	else if (mark >= 40 && mark < 50)
	return 6;
	else {
	return 0; 
	}
}

void main() {
	struct marks student1;
	entermarks(&student1);
	calculatesgpa(student1);
	getch();
}
