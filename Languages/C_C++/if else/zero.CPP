#include <stdio.h>
#include <conio.h>
void main()
{
	int number;
	clrscr();
	printf("enter the number : ");
	scanf("%d", &number);

	if (number == 0)
	{
		printf("zero");
	}
	else if (number > 0)
	{
		printf("positive number");
	}
	else
	{
		printf("negative number");
	}
	getch();
}
