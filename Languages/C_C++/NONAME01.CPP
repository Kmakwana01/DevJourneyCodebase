#include<stdio.h>
#include<conio.h>
void main()
{
		int a=0,b=1,c=2,d,n;
clrscr();
		printf("enter the n value: ");
		scanf("%d",&n);

		for(int i=1; i<=n; i++)
		{
			printf("\n%d",a);
			d=a+b+c;
			a=b;
			b=c;
			c=d;
		}



getch();
}