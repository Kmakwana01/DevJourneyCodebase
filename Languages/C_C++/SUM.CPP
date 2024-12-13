#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b, sum = 0;
	clrscr();
	printf("enter a:");
	scanf("%d", &a);
	while (a <= 10)
	{
		printf("\n%d", a);
		sum = a + sum;
		a++;
	}
	printf("\nsum is %d", sum);
	getch();
}