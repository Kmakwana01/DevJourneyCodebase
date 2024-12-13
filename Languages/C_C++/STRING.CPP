#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char putt[50];
	clrscr();
	puts("enter the any str number");

	gets(putt);
	puts(strlwr(putt));
	getch();
	return 0;
}
