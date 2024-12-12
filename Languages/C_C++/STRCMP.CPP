#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[89],str3[44];
clrscr();
	puts("enter string");
	gets(str);

	puts("enter string3");
	gets(str3);

	if(strcmp(str,str3)==0)
	{
	puts("equel");
	}
	else
	{
	puts("not equle");
	}
getch();
}

