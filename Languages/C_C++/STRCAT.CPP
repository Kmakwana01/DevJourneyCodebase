#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name1[50],name2[50];
clrscr();
	puts("enter the name 1 :");
	gets(name1);

	puts("enter the name 2 :");
	gets(name2);

	strcat(name1,name2);
	puts(name1);
getch();
}
