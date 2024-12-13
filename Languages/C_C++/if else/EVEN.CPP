#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j;
	clrscr();

	printf("enter the i&j : ");
	scanf("%d%d", &i, &j);

	if (i > j)
	{
		while (i > j)
		{
			if (i % 2 == 0)
			{
				printf("\n%d", i);
			}
			i--;
		}
	}
	else
	{
		while (i < j)
		{
			if (j % 2 == 1)
			{
				printf("\n%d", j);
			}
			j--;
		}
	}
	getch();
}