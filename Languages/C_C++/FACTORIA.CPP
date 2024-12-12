#include<stdio.h>
#include<conio.h>
void main()
{
		int i,fact=1,n;
		printf("enter n vlaue");
		scanf("%d",&n);

		for(i=1; i<=n; i++)
		{
			fact*=i;
		}
		printf("fact is %d",fact);
		getch();
		}
