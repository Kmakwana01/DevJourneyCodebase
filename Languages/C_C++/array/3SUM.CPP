#include <stdio.h>
#include <conio.h>

void main()
{
	int u[90], p[89], l[90], i, sum = 0, n, sum2 = 0, sum3 = 0;
	clrscr();
	printf("enter array elements ::");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("u[%d] :: ", i);
		scanf("%d", &u[i]);
		sum += u[i];
	}
	printf("\narray1 sum is==%d\n\n", sum);

	for (i = 0; i < n; i++)
	{
		printf("p[%d] :: ", i);
		scanf("%d", &p[i]);
		sum2 += p[i];
	}
	printf("\narray2==%d\n", sum2);
	for (i = 0; i < n; i++)
	{
		printf("\nl[%d] :: %d ", i, u[i] + p[i]);
		sum3 += u[i] + p[i];
	}
	printf("\n\narray1 & array2 sum is==%d\n\n", sum3);
	getch();
}
