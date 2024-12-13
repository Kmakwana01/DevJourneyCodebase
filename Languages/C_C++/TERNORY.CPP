#include <stdio.h>
#include <conio.h>
void main()
{
	int age;
	clrscr();
	printf("enter the  age : ");
	scanf("%d", &age);

	age < 12 ? printf("child\n") : printf("not child\n");
	age > 12 && age < 18 ? printf("teenager\n") : printf("not teenager\n");
	age > 18 ? printf("adult\n") : printf("not adult\n");

	getch();
}