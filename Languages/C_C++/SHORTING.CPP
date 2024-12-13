#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	clrscr();
	char p[] = "khushal";
	char o;
	int i, j;

	int l = strlen(p);
	printf("\nbefore shorting %s\n", p);

	for (i = 0; i < l - 1; i++)
	{
		for (j = i + 1; j < l; j++)
		{
			if (p[i] > p[j])
			{
				o = p[i];
				p[i] = p[j];
				p[j] = o;
			}
		}
	}
	printf("after shorting %s\n", p);

	getch();
	return 0;
}