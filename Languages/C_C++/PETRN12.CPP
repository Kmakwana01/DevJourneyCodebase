#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	for(int i=5; i>=1; i--)
	{
		for(int j=5; j>=i; j--)
		{
			printf(" ",j);
		}
		for(int k=1; k<=i; k++)
		{
		      printf("%d",k);
		}
		printf("\n");
	}
getch();
}