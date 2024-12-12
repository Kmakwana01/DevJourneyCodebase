#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

	for(int i=5; i>=1; i--)
	{
		for(int k=1; k<i; k++)
		{
		printf(" ");
		}
		for(int j=5; j>=k; j--)
		{
		printf("%d",j);
		}
		printf("\n");
	}
getch();

}