#include <stdio.h>
#include <conio.h>

void main()
{
	int q[90], n, op, k;
	clrscr();
	printf("enter the elements :");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("a[%d] : ", i);
		scanf("%d", &q[i]);
	}

	printf("enter elements position\t");
	scanf("%d", &op);

	printf("enter new elements\t");
	scanf("%d", &k);

	for (i = n; i > op; i--)
	{
		q[i] = q[i - 1];
	}
	
	q[op] = k;

	for (i = 0; i <= n; i++)
	{
		printf("\na[%d] :: %d", i, q[i]);
	}
	getch();
}