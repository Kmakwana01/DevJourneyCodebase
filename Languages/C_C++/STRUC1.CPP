#include <stdio.h>
#include <conio.h>
struct student
{
	char name[100];
	int roll, p1, p2;
	float per;
	long int no;
} s1[100];
int main()
{
	int i;

	clrscr();
	for (i = 0; i <= 1; i++)
	{

		printf("enter student name::");
		flushall();
		gets(s1[i].name);

		printf("enter student roll no.::");
		scanf("%d", &s1[i].roll);

		printf("enter student marks sub 1 & sub2:: ");
		scanf("%d%d", &s1[i].p1, &s1[i].p2);

		printf("mobile bumber:");
		scanf("%ld", &s1[i].no);
		printf("\n");
	}
	printf("\nstudent full biodata\n");
	for (i = 0; i <= 1; i++)
	{
		printf("\n\n[%d] student detail", i);
		printf("\nstudent name :: %s", s1[i].name);
		printf("\nstudent roll no:: %d", s1[i].roll);
		printf("\nstudent marks :: %d & %d", s1[i].p1, s1[i].p2);
		printf("\nmobile number :: %ld", s1[i].no);
	}
	getch();
	return 0;
}
