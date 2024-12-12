#include <stdio.h>
#include <conio.h>
void main()
{
	int p[34], q[30], n, sum = 0, sum2 = 0, m, plus[20];
	clrscr();
	printf("enter element value ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		printf("p[%d]:::", i);
		scanf("%d", &p[i]);

		sum += p[i];
	}
	printf("\nsum is %d\n", sum);

	printf("\n\element2 value\t\n");

	for (i = 0; i <= n; i++)
	{
		printf("q[%d]:::", i);
		scanf("%d", &q[i]);

		sum2 += q[i];
	}
	printf("\nsum2 is %d\n\n", sum2);

	printf("\n p & q sum is\n");

	for (i = 0; i < n; i++)
	{
		plus[i] = p[i] + q[i];
		printf("\nplus[%d]::%d", i, plus[i]);
	}

	getch();
}