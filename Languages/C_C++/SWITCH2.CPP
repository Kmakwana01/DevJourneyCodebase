#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b;
	char chh;
	clrscr();

	printf("enter the a & b : ");
	scanf("%d%d", &a, &b);

	printf("enter the char.. :");
	flushall();
	scanf("%c", &chh);
	printf("\n");
	switch (chh)
	{

	case '*':
	{
		printf("%d", a * b);
		break;
	}
	case '+':
	{
		printf("%d", a + b);

		break;
	}
	case '/':
		printf("%d", a / b);
		break;
	case '%':
		printf("%d", a % b);
		break;
	case '-':
		printf("%d", a - b);
		break;
	default:
	{
		printf("not valid");
	}
	}
	getch();
}
