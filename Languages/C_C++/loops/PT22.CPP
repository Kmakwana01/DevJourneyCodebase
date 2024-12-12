#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

		for(int i=1; i<=4; i++)
		{
		for(int k=6; k>i; k--)
		{
		printf(" ");
		}
		for(int j=1; j<=i; j++)
		{
		printf("%d",j);
		}
		printf("\n");
		}


		for(int h=1; h<=5; h++)
		{

		for(int l=6-h; l<=5; l++)
		{
		printf(" ");
		}
		for(int m=h; m<=5; m++)
		{
		printf("%d",m);
		}
		printf("\n");
		}
getch();
}