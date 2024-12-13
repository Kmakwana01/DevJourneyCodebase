#include <stdio.h>
#include <conio.h>
void printnum(int num[5], int number[5], int sum[5])
{
	for (int i = 0; i < 5; i++)
	{
		sum[i] = number[i] + num[i];
		printf("\nsum[%d] :: %d", i, sum[i]);
	}
}
int main()
{
	clrscr();
	int num[5], number[5], sum[5];

	for (int i = 0; i < 5; i++)
	{
		printf("num[%d] ::", i);
		scanf("%d", &num[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("number[%d] ::", i);
		scanf("%d", &number[i]);
	}

	printnum(num, number, sum);

	getch();
	return 0;
}
