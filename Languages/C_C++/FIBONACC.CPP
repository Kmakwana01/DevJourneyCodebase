#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,a=0,b=1,c,i=1;

	printf("enter the n value\n");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	getch();
	}























