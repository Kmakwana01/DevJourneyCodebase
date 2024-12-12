#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	for(int i=1; i<=10; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(i%2==1)
			{
			printf("* ",j);
			}
		}
		printf("\n");
	}
getch();
}