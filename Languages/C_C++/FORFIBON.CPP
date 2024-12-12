#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,n;
	printf("enter the n value : ");
	scanf("%d",&n);
clrscr();
	for(int i=1; i<=n; i++)
	{
	   printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
	}
