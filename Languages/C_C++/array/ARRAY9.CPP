#include <stdio.h>
#include <conio.h>
void main()
{
	int a[30], n, i, j, m;
	clrscr();
	printf("enter elements\t");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		printf("a[%d] :: ", i);
		scanf("%d", &a[i]);
	}
	printf("enter elements no.");
	scanf("%d", &j);
	printf("enter new element");
	scanf("%d", &m);

	for (i = 0; i <= n; i++)
	{
		if (j == i)
		{
			a[i] = m;
		}
	}
	for (i = 0; i <= n; i++)
	{
		printf("\na[%d] :: %d", i, a[i]);
	}
	getch();
}
