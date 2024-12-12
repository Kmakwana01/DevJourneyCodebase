#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int marks[]={0,65,77,67,88,67};

clrscr();
	int i;
	printf("       \t\t\t[student markssheet]\n\n ");
	printf("===============================================================================");
	printf("\troll No      name        subject       marks       result\n");
	printf(" ===============================================================================");

	for(i=1; i<=5; i++)
	{
	printf("\n\t %d\t    khushal  \t  is\t\t%d\t    pass ",i,marks[i]);
	}

getch();
}