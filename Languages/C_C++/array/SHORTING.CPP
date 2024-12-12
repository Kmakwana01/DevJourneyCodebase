#include <stdio.h>
#include <conio.h>
void main()
{
	int a[90], i, j, n, p;
	clrscr();

	printf("enter n");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		printf("a[%d]:: ", i, j);
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (a[i] > a[j])
			{
				p = a[i];
				a[i] = a[j];
				a[j] = p;
			}
		}
	}
	printf("after shorting");
	for (i = 0; i <= n; i++)
	{
		printf("\na[%d] :: %d", i, a[i]);
	}
	printf("\nafter shorting 2\n");
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (a[i] < a[j])
			{
				p = a[i];
				a[i] = a[j];
				a[j] = p;
			}
		}
	}
	printf("after shorting");
	for (i = 0; i <= n; i++)
	{
		printf("\na[%d] :: %d", i, a[i]);
	}
	getch();
}