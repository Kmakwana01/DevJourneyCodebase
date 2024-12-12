#include<stdio.h>
#include<conio.h>
void fact();
void main()
{
	clrscr();
	fact();
	getch();
}
void fact()
{
		int n,fact=1;

		printf("enter n:");
		scanf("%d",&n);

		for(int i=1; i<=n; i++)
		{
			fact=fact*i;//fact*=i;
		}
		printf("%d fact is %d",n,fact);
}