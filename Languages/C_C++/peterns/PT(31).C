#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s,m,n;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		   printf("\n");
	}
	for(m=4;m>=1;m--)
	{
		for(n=m;n>=1;n--)
		{
			printf("%d",n);
		}
		printf("\n");
	}
	getch();
}