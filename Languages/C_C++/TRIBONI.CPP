#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=1,c=2,d,i=1;
clrscr();

	printf("enter the n value :");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d\n",a);

		d=a+b+c;
		a=b;
		b=c;
		c=d;

		i++;
	}
	getch();
	}
