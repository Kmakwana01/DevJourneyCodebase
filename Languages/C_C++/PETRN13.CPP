#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf(" ",j);
		}
		for(int k=i; k<=5; k++)
		{
		      printf("%d",k);
		}
		printf("\n");
	}
getch();
}