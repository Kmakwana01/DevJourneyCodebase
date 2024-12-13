#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char a[90], cnt = 0;
	clrscr();
	printf("enter sentence::");
	gets(a);
	printf("\ntotal count is %d", strlen(a));
	for (int i = 0; a[i] != NULL; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			cnt++;
		}
	}
	printf("\nupper case is %d", cnt);
	cnt = 0;
	for (i = 0; a[i] != NULL; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			cnt++;
		}
	}
	printf("\nlower case is %d", cnt);
	cnt = 0;

	for (i = 0; a[i] != NULL; i++)
	{
		if (a[i] >= '1' && a[i] <= '9')
		{
			cnt++;
		}
	}
	printf("\ndigit is %d", cnt);
	cnt = 0;

	for (i = 0; a[i] != NULL; i++)
	{
		if (a[i] == ' ')
		{
			cnt++;
		}
	}
	printf("\nspace is %d", cnt);
	cnt = 0;

	getch();
}
