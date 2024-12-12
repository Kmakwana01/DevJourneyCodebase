#include<stdio.h>
#include<conio.h>
void main()
{
int p,k;
clrscr();
		printf("enter the p&q = ");
		scanf("%d%d",&p,&k);
		if(p>k)
		{
			while(p>=k)
			{
			if(p%2==0)
			{
				printf("%d\n",p);
			}
				p--;

			}
		}
		else
		{
			while(p<=k)
			{
			if(k%2==1)
			{
				printf("%d\n",k);
			}
				k--;
			}
		}
		getch();
		}