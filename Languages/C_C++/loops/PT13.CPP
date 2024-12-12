#include<stdio.h>
#include<conio.h>
void main()
{
		for(int i=1; i<=5; i++)
		{

		for(int l=6-i; l<=5; l++)
		{
		printf(" ");
		}
		for(int m=i; m<=5; m++)
		{
		printf("%d",m);
		}
		printf("\n");
		}
getch();
}
