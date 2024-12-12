#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
	printf("enter a & b:");
	scanf("%d%d",&a,&b);

	if(a>b)
	{
		while(a>b)
		{
			if(a%2==0)
			{
			   printf("\n%d",a);
			}
			a--
			;
		}
	}
	else
	{
		while(b>a)
		{
			if(b%2==1)
			{
			   printf("\n%d",b);
			}
			b--;
		}
	}
	getch();
	}