#include<stdio.h>
#include<conio.h>
void main()
{
	int  n,multi=1;
clrscr();
	printf("enter n");
	scanf("%d",&n);

	for(int i=1; i<=n; i++)
	{
	multi=multi*i;
	printf("%d\t",i);
	}
	printf("\nmultification is %d",multi);
getch();
}