#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int a,b,i,n=3;
	a=0;
	b=1;
	i=a+b;
		printf("enter the n:");
		scanf("%d",&n);

		printf("fibona series :%d%d",a,b);

	while(a<n)
	{
		printf("\n%d",i);
		a=b;
		b=i;
		i=a+b;
	}
	getch();
	}
