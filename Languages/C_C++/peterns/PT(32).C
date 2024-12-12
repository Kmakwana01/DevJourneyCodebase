#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s,m,n,v;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(s=i;s<5;s++)
		{
		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		printf("%d",j);
		}
		printf("\n");
	}
	for(m=2;m<=5;m++)
	{
		for(v=1;v<m;v++)
		{
			printf(" ");
		}
		for(n=m;n<=5;n++)
		{
			printf("%d",n);
		}
		printf("\n");
	}
	getch();
}